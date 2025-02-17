#pragma once
#include <algorithm>
#include "RenameStruct.hpp"

namespace process {

clang::transformer::RewriteRule processRenameTypedefStructRule(const std::string& randomSuffix) {
    auto typedefStructDeclMatcher = typedefDecl(
        isExpansionInMainFile(),
        hasAncestor(translationUnitDecl(
            hasDescendant(
                fieldDecl(
                    isExpansionInMainFile()
                ).bind("typedefStructDecl")
            )
        ))
    ).bind("typedefStructDecl");

    return makeRule(typedefStructDeclMatcher, {
        insertAfter(name("typedefStructDecl"), cat("_", randomSuffix)),
    });
}

clang::transformer::RewriteRule processRenameTypedefStructRefRule(const std::string& randomSuffix) {
    auto typedefStructDeclRefMatcher = typeLoc(
        loc(typedefType(
            hasDeclaration(
                typedefDecl(
                    isExpansionInMainFile()
                ).bind("typedefStructDecl")
            )
        ))
    ).bind("typedefStructDeclRef");

    return makeRule(typedefStructDeclRefMatcher, {
        insertAfter(node("typedefStructDeclRef"), cat("_", randomSuffix)),
    });
}

clang::transformer::RewriteRule processRenameStructName(const std::string& randomSuffix) {
    auto structDeclMatcher = recordDecl(
        isExpansionInMainFile(),
        isDefinition(),
        unless(
            hasName("(anonymous)")
        )
    ).bind("structDecl");
    
    return makeRule(structDeclMatcher, {
        insertAfter(name("structDecl"), cat("_", randomSuffix)),
    });
}

clang::transformer::RewriteRule processRenameStructRefName(const std::string& randomSuffix) {
    auto structDeclRefMatcher = typeLoc(
        loc(recordType(
            hasDeclaration(
                recordDecl(
                    isExpansionInMainFile(),
                    unless(
                        hasName("(anonymous)")
                    )
                ).bind("structDecl")
            )
        ))
    ).bind("structDeclRef");

    return makeRule(structDeclRefMatcher, {
        insertAfter(node("structDeclRef"), cat("_", randomSuffix)),
    });
}

}

process::RenameStruct::RenameStruct(
    std::map<std::string, clang::tooling::Replacements> &FileToReplacements)
    : FileToReplacements{FileToReplacements} {
        std::string randomSuffix = extractor_utils::generate_random_string(6);
        ruleCallbacks.emplace_back(ruleactioncallback::RuleActionCallback{
            processRenameTypedefStructRule(randomSuffix), FileToReplacements, FileToNumberValueTrackers});
        ruleCallbacks.emplace_back(ruleactioncallback::RuleActionCallback{
            processRenameTypedefStructRefRule(randomSuffix), FileToReplacements, FileToNumberValueTrackers});
        ruleCallbacks.emplace_back(ruleactioncallback::RuleActionCallback{
            processRenameStructName(randomSuffix), FileToReplacements, FileToNumberValueTrackers});
        ruleCallbacks.emplace_back(ruleactioncallback::RuleActionCallback{
            processRenameStructRefName(randomSuffix), FileToReplacements, FileToNumberValueTrackers});
    }

void process::RenameStruct::registerMatchers(clang::ast_matchers::MatchFinder &Finder) {
    for (auto &Callback : ruleCallbacks){
        Callback.registerMatchers(Finder);
    }
}


