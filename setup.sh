#!/bin/bash

# LegoFuzz Setup Script
# This script installs all required dependencies for LegoFuzz

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

check_command() {
    if command -v "$1" >/dev/null 2>&1; then
        print_success "$1 is already installed"
        return 0
    else
        return 1
    fi
}

check_python_version() {
    if command -v python3 >/dev/null 2>&1; then
        local version=$(python3 -c 'import sys; print(".".join(map(str, sys.version_info[:2])))')
        local major=$(echo $version | cut -d. -f1)
        local minor=$(echo $version | cut -d. -f2)
        
        if [ "$major" -ge 3 ] && [ "$minor" -ge 10 ]; then
            print_success "Python $version is installed (>= 3.10 required)"
            return 0
        else
            print_error "Python $version is installed, but >= 3.10 is required"
            return 1
        fi
    else
        print_error "Python 3 is not installed"
        return 1
    fi
}

install_system_dependencies() {
    print_status "Installing system dependencies..."
    
    # Update package list quietly
    print_status "Updating package list..."
    sudo apt-get update -qq > /dev/null 2>&1
    
    print_status "Installing basic build tools..."
    sudo apt-get install -y -qq \
        build-essential \
        g++ \
        cmake \
        ninja-build \
        git \
        wget \
        curl \
        lsb-release \
        autotools-dev \
        autoconf \
        automake \
        libtool \
        m4 > /dev/null 2>&1

        
    # Install Python 3.10+ if needed
    if ! check_python_version; then
        print_status "Installing Python 3.10..."
        sudo apt-get install -y -qq python3.10 python3.10-dev python3.10-venv python3-pip > /dev/null 2>&1
        # Set python3 to point to python3.10
        sudo update-alternatives --install /usr/bin/python3 python3 /usr/bin/python3.10 1 > /dev/null 2>&1
    fi
    
    # Ensure python3-venv is installed for virtual environment support
    print_status "Ensuring python3-venv is installed..."
    sudo apt-get install -y -qq python3-venv > /dev/null 2>&1
    
    print_success "System dependencies installed"
}

install_clang() {
    print_status "Installing Clang/LLVM 20..."
    
    # Check if clang-20 is already installed and set as default
    if command -v clang >/dev/null 2>&1; then
        local clang_version=$(clang --version 2>/dev/null | head -n1 | grep -o "clang version [0-9]*" | grep -o "[0-9]*" || echo "0")
        if [ "$clang_version" -ge "20" ]; then
            print_success "Clang $clang_version is already installed and set as default"
            return 0
        fi
    fi
    
    # Add LLVM repository
    print_status "Adding LLVM repository..."
    wget -qO- https://apt.llvm.org/llvm-snapshot.gpg.key | sudo tee /etc/apt/trusted.gpg.d/apt.llvm.org.asc > /dev/null 2>&1
    
    # Add repository based on Ubuntu/Debian version
    CODENAME=$(lsb_release -cs)
    echo "deb http://apt.llvm.org/$CODENAME/ llvm-toolchain-$CODENAME-20 main" | sudo tee /etc/apt/sources.list.d/llvm-20.list > /dev/null 2>&1
    
    print_status "Updating package list with LLVM repository..."
    sudo apt-get update -qq > /dev/null 2>&1
    
    # Install only essential clang/llvm packages
    print_status "Installing Clang/LLVM 20 packages..."
    sudo apt-get install -y -qq \
        clang-20 \
        llvm-20 \
        llvm-20-dev \
        libclang-20-dev \
        libclang-dev > /dev/null 2>&1
    
    # Verify installation
    if command -v clang-20 >/dev/null 2>&1; then
        local installed_version=$(clang-20 --version 2>/dev/null | head -n1)
        print_success "Clang/LLVM 20 installed successfully"
        print_status "Installed version: $installed_version"
    else
        print_error "Clang-20 installation failed"
        return 1
    fi
}

setup_python_environment() {
    print_status "Setting up Python virtual environment..."
    
    local venv_dir=".venv"
    
    # Create virtual environment if it doesn't exist
    if [ ! -d "$venv_dir" ]; then
        print_status "Creating virtual environment..."
        python3 -m venv "$venv_dir"
    else
        print_success "Virtual environment already exists"
    fi
    
    # Activate virtual environment
    print_status "Activating virtual environment..."
    source "$venv_dir/bin/activate"
    
    # Upgrade pip quietly
    print_status "Upgrading pip in virtual environment..."
    pip install --upgrade pip --quiet
    
    # Install required packages
    print_status "Installing diopter..."
    pip install diopter==0.0.24 --quiet
    print_status "Installing tqdm..."
    pip install tqdm --quiet
    print_status "Installing python-dotenv..."
    pip install python-dotenv --quiet
    print_status "Installing pyyaml..."
    pip install pyyaml --quiet
    print_status "Installing openai, together..."
    pip install openai together --quiet
    
    print_success "Python virtual environment set up successfully"
}

install_csmith() {
    print_status "Installing Csmith..."
    
    if [ -n "$CSMITH_HOME" ] && [ -f "$CSMITH_HOME/include/csmith.h" ]; then
        print_success "Csmith is already installed at $CSMITH_HOME"
        return 0
    fi
    
    # Create installation directory
    local install_dir="$HOME/tools/csmith"
    mkdir -p "$HOME/tools"
    
    # Clone and build Csmith
    if [ ! -d "$install_dir" ]; then
        print_status "Cloning Csmith repository..."
        git clone https://github.com/csmith-project/csmith.git "$install_dir" --quiet
    fi
    
    cd "$install_dir"
    
    # Build Csmith
    print_status "Building Csmith..."
    if [ ! -f "configure" ]; then
        ./autogen.sh > /dev/null 2>&1
    fi
    
    if [ ! -f "Makefile" ]; then
        ./configure --prefix="$install_dir" > /dev/null 2>&1
    fi
    
    make -j$(nproc) > /dev/null 2>&1
    make install > /dev/null 2>&1
    
    # Set CSMITH_HOME environment variable
    export CSMITH_HOME="$install_dir"
    echo "export CSMITH_HOME=\"$install_dir\"" >> ~/.bashrc
    
    print_success "Csmith installed at $install_dir"
    print_warning "Please run 'source ~/.bashrc' or restart your shell to use CSMITH_HOME"
}

install_compcert() {
    print_status "Installing CompCert..."
    
    if check_command ccomp; then
        print_success "CompCert is already installed"
        return 0
    fi
    
    print_status "CompCert installation requires manual steps."
    print_status "Please follow the instructions at: https://compcert.org/man/manual002.html#install"
    print_status "You can:"
    print_status "1. Download a pre-built binary from https://compcert.org/release/"
    print_status "2. Or build from source if you have an OCaml development environment"
    print_warning "Skipping automatic CompCert installation - please install manually"
}

build_extractor() {
    print_status "Building function extractor..."
    
    local extractor_dir="dbconstructor/functionextractor"
    local build_dir="$extractor_dir/build"
    
    if [ ! -d "$extractor_dir" ]; then
        print_error "Function extractor directory not found: $extractor_dir"
        return 1
    fi
    
    # Check if already built
    if [ -f "$build_dir/bin/functionextractor" ]; then
        print_success "Function extractor is already built"
        return 0
    fi
    
    # Create build directory
    mkdir -p "$build_dir"
    cd "$build_dir"
    
    # Configure with CMake using clang-20
    print_status "Configuring function extractor with clang-20..."
    cmake -DCMAKE_C_COMPILER=clang-20 \
        -DCMAKE_CXX_COMPILER=clang++-20 \
        -DCMAKE_BUILD_TYPE=Release \
        -DLLVM_DIR=/usr/lib/llvm-20/cmake \
        -G Ninja \
        .. > /dev/null 2>&1

    
    # Build
    print_status "Building function extractor..."
    ninja > /dev/null 2>&1
    
    if [ -f "bin/functionextractor" ]; then
        print_success "Function extractor built successfully"
    else
        print_error "Function extractor build failed"
        return 1
    fi
    
    # Return to original directory
    cd - > /dev/null
}

build_profiler() {
    print_status "Building profiler..."
    
    local profiler_dir="dbconstructor/profiler"
    local build_dir="$profiler_dir/build"
    
    if [ ! -d "$profiler_dir" ]; then
        print_error "Profiler directory not found: $profiler_dir"
        return 1
    fi
    
    # Check if already built
    if [ -f "$build_dir/bin/profiler" ]; then
        print_success "Profiler is already built"
        return 0
    fi
    
    # Create build directory
    mkdir -p "$build_dir"
    cd "$build_dir"
    
    # Configure with CMake using clang-20
    print_status "Configuring profiler with clang-20..."
    cmake -DCMAKE_C_COMPILER=clang-20 \
          -DCMAKE_CXX_COMPILER=clang++-20 \
          -DCMAKE_BUILD_TYPE=Release \
          -DLLVM_DIR=/usr/lib/llvm-20/cmake \
          -G Ninja \
          .. > /dev/null 2>&1
    
    # Build
    print_status "Building profiler..."
    ninja > /dev/null 2>&1
    
    if [ -f "bin/profiler" ]; then
        print_success "Profiler built successfully"
    else
        print_error "Profiler build failed"
        return 1
    fi
    
    # Return to original directory
    cd - > /dev/null
}

verify_installation() {
    print_status "Verifying installation..."
    
    local all_good=true
    
    # Check if virtual environment exists
    if [ ! -d ".venv" ]; then
        print_error "Virtual environment directory '.venv' not found"
        all_good=false
        return 1
    fi
    
    # Check Python
    if ! check_python_version; then
        all_good=false
    fi
    
    # Check Clang
    if command -v clang-20 >/dev/null 2>&1; then
        local clang_version=$(clang-20 --version 2>/dev/null | head -n1)
        if echo "$clang_version" | grep -q "clang version 20"; then
            print_success "Clang 20 is installed"
            print_status "Version: $clang_version"
        else
            print_error "Clang-20 is installed but not version 20"
            print_status "Current version: $clang_version"
            all_good=false
        fi
    else
        print_error "Clang-20 is not installed or not in PATH"
        all_good=false
    fi
    
    # Check built binaries
    if [ -f "dbconstructor/functionextractor/build/bin/functionextractor" ]; then
        print_success "Function extractor is built"
    else
        print_error "Function extractor is not built"
        all_good=false
    fi
    
    if [ -f "dbconstructor/profiler/build/bin/profiler" ]; then
        print_success "Profiler is built"
    else
        print_error "Profiler is not built"
        all_good=false
    fi
    
    # Check Python packages (in virtual environment)
    local packages=("diopter" "tqdm" "dotenv" "yaml" "openai" "together")
    local venv_python=".venv/bin/python"
    if [ -f "$venv_python" ]; then
        for pkg in "${packages[@]}"; do
            if "$venv_python" -c "import $pkg" 2>/dev/null; then
                print_success "Python package '$pkg' is installed in virtual environment"
            else
                print_error "Python package '$pkg' is not installed in virtual environment"
                all_good=false
            fi
        done
    else
        print_error "Virtual environment not found at .venv/"
        all_good=false
    fi
    
    # Check CSMITH_HOME
    if [ -n "$CSMITH_HOME" ] && [ -f "$CSMITH_HOME/include/csmith.h" ]; then
        print_success "CSMITH_HOME is set and csmith.h is found"
    else
        print_error "CSMITH_HOME is not set or csmith.h is not found"
        all_good=false
    fi
    
    # Check CompCert
    if check_command ccomp; then
        all_good=true  # Don't fail if CompCert is missing since it requires manual installation
    else
        print_warning "CompCert (ccomp) is not installed - please install manually"
    fi
    
    if $all_good; then
        print_success "All dependencies are properly installed!"
    else
        print_error "Some dependencies are missing or not properly configured"
        return 1
    fi
}

main() {
    print_status "Starting LegoFuzz setup..."
    
    # Check if running from correct directory
    if [ ! -f "fuzz.py" ] || [ ! -f "synthesize.py" ]; then
        print_error "Please run this script from the LegoFuzz root directory"
        exit 1
    fi
    
    # Install dependencies step by step
    install_system_dependencies
    install_clang
    setup_python_environment
    install_csmith
    install_compcert
    
    # Build components
    build_extractor
    build_profiler
    
    print_status "Setup completed!"
    verify_installation
    
    echo ""
    print_success "=== SETUP COMPLETE! ==="
    echo ""
    print_success "Virtual environment created at .venv/"
    print_status "To activate: source .venv/bin/activate"
    echo ""
    print_warning "Note: If this is your first time running setup, please run 'source ~/.bashrc' to load CSMITH_HOME"
}

# Run main function
main "$@"