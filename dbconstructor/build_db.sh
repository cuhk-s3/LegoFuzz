#!/bin/bash

# LegoFuzz Database Construction Script
# This script automates the entire offline phase: from C files to function database

set -e  # Exit on any error

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

print_status() {
    echo -e "${BLUE}[INFO]${NC} $1"
}

print_success() {
    echo -e "${GREEN}[SUCCESS]${NC} $1"
}

print_warning() {
    echo -e "${YELLOW}[WARNING]${NC} $1"
}

print_error() {
    echo -e "${RED}[ERROR]${NC} $1"
}

usage() {
    echo "Usage: $0 --src <C_FILES_DIR> --dst <OUTPUT_DATABASE> [OPTIONS]"
    echo ""
    echo "Required arguments:"
    echo "  --src <C_FILES_DIR>     Path to directory containing C files"
    echo "  --dst <OUTPUT_DATABASE> Path to output the final function database"
    echo ""
    echo "Optional arguments:"
    echo "  --cpu <N>              Number of CPU cores to use (default: all available)"
    echo "  --temp-dir <DIR>       Temporary directory for intermediate files (default: ./tmp_build)"
    echo "  --keep-temp           Keep temporary files after completion"
    echo "  --help                Show this help message"
    echo ""
    echo "Examples:"
    echo "  $0 --src ./c_files --dst ./functions.json"
    echo "  $0 --src ./source_code --dst ./my_database.json --cpu 8"
}

# Default values
TEMP_DIR="./tmp_build"
KEEP_TEMP=false
CPU_COUNT=$(nproc)

# Parse command line arguments
while [[ $# -gt 0 ]]; do
    case $1 in
        --src)
            SRC_DIR="$2"
            shift 2
            ;;
        --dst)
            OUTPUT_DATABASE="$2"
            shift 2
            ;;
        --cpu)
            CPU_COUNT="$2"
            shift 2
            ;;
        --temp-dir)
            TEMP_DIR="$2"
            shift 2
            ;;
        --keep-temp)
            KEEP_TEMP=true
            shift
            ;;
        --help)
            usage
            exit 0
            ;;
        *)
            print_error "Unknown argument: $1"
            usage
            exit 1
            ;;
    esac
done

# Check required arguments
if [[ -z "$SRC_DIR" || -z "$OUTPUT_DATABASE" ]]; then
    print_error "Missing required arguments"
    usage
    exit 1
fi

# Check if source directory exists
if [[ ! -d "$SRC_DIR" ]]; then
    print_error "Source directory does not exist: $SRC_DIR"
    exit 1
fi

# Convert to absolute paths to avoid issues when changing directories
SRC_DIR=$(realpath "$SRC_DIR")
OUTPUT_DATABASE=$(realpath "$OUTPUT_DATABASE")
TEMP_DIR=$(realpath "$TEMP_DIR")

# Check if source directory contains C files
if ! find "$SRC_DIR" -name "*.c" -o -name "*.h" | head -1 | grep -q .; then
    print_error "No C files found in source directory: $SRC_DIR"
    exit 1
fi

print_status "Starting LegoFuzz database construction..."
print_status "Source: $SRC_DIR"
print_status "Output: $OUTPUT_DATABASE"
print_status "CPU cores: $CPU_COUNT"
print_status "Temp directory: $TEMP_DIR"

# Create temporary directories
mkdir -p "$TEMP_DIR"
FUNCTIONS_JSON="$TEMP_DIR/functions.json"
FUNCTIONS_IO_JSON="$TEMP_DIR/functions_io.json"

print_status "Created temporary directory: $TEMP_DIR"

# Step 1: Check function extractor
print_status "Step 1/3: Checking function extractor..."
cd functionextractor

if [[ ! -f "build/bin/functionextractor" ]]; then
    print_error "Function extractor not found at build/bin/functionextractor"
    print_error "Please run ./setup.sh first to build the required components"
    exit 1
else
    print_success "Function extractor found"
fi

# Extract functions
print_status "Extracting functions from C files..."
./extract.py --src "$SRC_DIR" --dst "$FUNCTIONS_JSON" --cpu "$CPU_COUNT"

if [[ $? -ne 0 ]]; then
    print_error "Failed to extract functions"
    exit 1
fi

print_success "Function extraction completed"
cd ..

# Generate I/O pairs
print_status "Generating I/O pairs with verification..."
cd iogenerator

./generate.py --src "$FUNCTIONS_JSON" --dst "$FUNCTIONS_IO_JSON" --cpu "$CPU_COUNT"

if [[ $? -ne 0 ]]; then
    print_error "Failed to generate I/O pairs"
    exit 1
fi

print_success "I/O pair generation completed"
cd ..

# Step 2: Check profiler
print_status "Step 2/3: Checking profiler..."
cd profiler

if [[ ! -f "build/bin/profiler" ]]; then
    print_error "Profiler not found at build/bin/profiler"
    print_error "Please run ./setup.sh first to build the required components"
    exit 1
else
    print_success "Profiler found"
fi

# Profile functions
print_status "Step 3/3: Profiling functions..."
./profile.py --src "$FUNCTIONS_IO_JSON" --dst "$OUTPUT_DATABASE"

if [[ $? -ne 0 ]]; then
    print_error "Failed to profile functions"
    exit 1
fi

print_success "Function profiling completed"

# Deduplication
print_status "Running deduplication..."
./dedup.py "$OUTPUT_DATABASE"

if [[ $? -ne 0 ]]; then
    print_warning "Deduplication failed, but continuing..."
fi

cd ..

# Clean up temporary files unless --keep-temp is specified
if [[ "$KEEP_TEMP" == "false" ]]; then
    print_status "Cleaning up temporary files..."
    rm -rf "$TEMP_DIR"
    print_success "Temporary files cleaned up"
else
    print_status "Temporary files kept at: $TEMP_DIR"
fi

print_success "Database construction completed successfully!"
print_status "Output database: $OUTPUT_DATABASE"
print_status "You can now use this database for program synthesis:"
print_status "  ../synthesize.py --src $OUTPUT_DATABASE --dst ./output --iter 10"
