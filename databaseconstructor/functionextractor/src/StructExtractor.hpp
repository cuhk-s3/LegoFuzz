#pragma once

#include <clang/ASTMatchers/ASTMatchers.h>
#include <clang/Tooling/Transformer/RewriteRule.h>
#include <clang/Tooling/Transformer/Stencil.h>

#include <clang/ASTMatchers/ASTMatchFinder.h>
#include <clang/Tooling/Tooling.h>
#include <clang/Tooling/Core/Replacement.h>

#include "StructPrinter.hpp"

namespace extractor
{
    
class StructExtractor {
    public:
        StructExtractor(std::map<std::string, clang::tooling::Replacements> &FileToReplacements);
        StructExtractor(const StructExtractor &) = delete;
        StructExtractor(StructExtractor &&) = delete;

        void registerMatchers(clang::ast_matchers::MatchFinder &Finder);
    
    private:
        std::map<std::string, clang::tooling::Replacements> &FileToReplacements;
        std::map<std::string, int> FileToNumberValueTrackers;
        printer::StructPrinter Printer;
};
} // namespace extractor
