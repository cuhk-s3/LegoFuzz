#pragma once

#include <clang/ASTMatchers/ASTMatchFinder.h>
#include <clang/Tooling/Core/Replacement.h>
#include <clang/Tooling/Transformer/RewriteRule.h>

#include "StructExtractor.hpp"

namespace extractor
{

auto typedefStructMatcher = typedefDecl(
    isExpansionInMainFile(),
    hasType(elaboratedType())
).bind("typedef");

auto structMatcher = recordDecl(
    isExpansionInMainFile(),
    unless(hasParent(recordDecl())),
    isDefinition(),
    unless(
        hasName("(anonymous)")
    )
).bind("struct");

} // namespace extractor

extractor::StructExtractor::StructExtractor(
    std::map<std::string, clang::tooling::Replacements> &FileToReplacements)
    : FileToReplacements{FileToReplacements} {}

void extractor::StructExtractor::registerMatchers(clang::ast_matchers::MatchFinder &Finder) {
    Finder.addMatcher(typedefStructMatcher, &Printer);
    Finder.addMatcher(structMatcher, &Printer);
}
