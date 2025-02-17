#pragma once
#include <algorithm>
#include "RenameVar.hpp"

namespace process
{

/* Rename local variable declaration */
clang::transformer::RewriteRule processRenameVarRule() {
    auto varDeclMatcher = varDecl(
        isExpansionInMainFile(),
        hasLocalStorage(),
        hasAncestor(translationUnitDecl(
            hasDescendant(
                functionDecl(
                    isExpansionInMainFile(),
                    isDefinition()
                ).bind("function")
            )
        ))
    ).bind("varDecl");

    return makeRule(varDeclMatcher, {
        insertAfter(name("varDecl"), cat("_", name("function"))),
    });
}

/* Rename local variable reference */
clang::transformer::RewriteRule processRenameVarRefRule() {
    auto varDefRefMatcher = declRefExpr(
        isExpansionInMainFile(),
        to(varDecl(
            hasLocalStorage()
        )),
        hasAncestor(functionDecl(
                    isExpansionInMainFile(),
                    isDefinition()
                ).bind("function")
            )
    ).bind("varDeclRef");

    return makeRule(varDefRefMatcher, {
        insertAfter(node("varDeclRef"), cat("_", name("function"))),
    });
}

// /* Rename local struct name */
// clang::transformer::RewriteRule processRenameStructRule() {
//     auto structDeclMatcher = recordDecl(
//         isExpansionInMainFile(),
//         hasAncestor(translationUnitDecl(
//             hasDescendant(
//                 functionDecl(
//                     isExpansionInMainFile(),
//                     isDefinition()
//                 ).bind("function")
//             )
//         ))).bind("structDecl");
    
//     return makeRule(structDeclMatcher, {
//         insertAfter(name("structDecl"), cat("_", name("function"))),
//     });
// }

/* Rename filed of struct */
clang::transformer::RewriteRule processRenameStructFieldRule() {
    auto fieldDeclMatcher = fieldDecl(
        isExpansionInMainFile(),
        hasAncestor(recordDecl(
            isExpansionInMainFile(),
            hasAncestor(translationUnitDecl(
                hasDescendant(
                    functionDecl(
                        isExpansionInMainFile(),
                        isDefinition()
                    ).bind("function")
                )
            ))
        ))).bind("fieldDecl");

    return makeRule(fieldDeclMatcher, {
        insertAfter(name("fieldDecl"), cat("_", name("function"))),
    });
}

/* Rename ref of struct field */
clang::transformer::RewriteRule processRenameStructFieldRefRule() {
    auto fieldRefMatcher = memberExpr(
        isExpansionInMainFile(),
        hasAncestor(translationUnitDecl(
            hasDescendant(
                functionDecl(
                    isExpansionInMainFile(),
                    isDefinition()
                ).bind("function")
            )
        ))
    ).bind("fieldRef");

    return makeRule(fieldRefMatcher, {
        insertAfter(node("fieldRef"), cat("_", name("function"))),
    });
}

/* Rename enum field */
clang::transformer::RewriteRule processRenameEnumFieldRule() {
    auto enumConstantDeclMatcher = enumConstantDecl(
        isExpansionInMainFile(),
        hasAncestor(enumDecl(
            isExpansionInMainFile(),
            hasAncestor(translationUnitDecl(
                hasDescendant(
                    functionDecl(
                        isExpansionInMainFile(),
                        isDefinition()
                    ).bind("function")
                )
            ))
        ))
    ).bind("enumConstantDecl");

    return makeRule(enumConstantDeclMatcher, {
        insertAfter(name("enumConstantDecl"), cat("_", name("function"))),
    });
}

/* Rename enum field reference */
clang::transformer::RewriteRule processRenameEnumFieldRefRule() {
    auto enumConstantRefMatcher = declRefExpr(
        isExpansionInMainFile(),
        to(enumConstantDecl(
            hasAncestor(enumDecl(
                isExpansionInMainFile(),
                hasAncestor(translationUnitDecl(
                    hasDescendant(
                        functionDecl(
                            isExpansionInMainFile(),
                            isDefinition()
                        ).bind("function")
                    )
                ))
            ))
        ))
    ).bind("enumConstantRef");

    return makeRule(enumConstantRefMatcher, {
        insertAfter(node("enumConstantRef"), cat("_", name("function"))),
    });
}

} // namespace process

process::RenameVar::RenameVar(
    std::map<std::string, clang::tooling::Replacements> &FileToReplacements)
    : FileToReplacements{FileToReplacements} {
        ruleCallbacks.emplace_back(ruleactioncallback::RuleActionCallback{
            processRenameVarRule(), FileToReplacements, FileToNumberValueTrackers});
        ruleCallbacks.emplace_back(ruleactioncallback::RuleActionCallback{
            processRenameVarRefRule(), FileToReplacements, FileToNumberValueTrackers});
        // ruleCallbacks.emplace_back(ruleactioncallback::RuleActionCallback{
        //     processRenameStructRule(), FileToReplacements, FileToNumberValueTrackers});
        ruleCallbacks.emplace_back(ruleactioncallback::RuleActionCallback{
            processRenameStructFieldRule(), FileToReplacements, FileToNumberValueTrackers});
        ruleCallbacks.emplace_back(ruleactioncallback::RuleActionCallback{
            processRenameStructFieldRefRule(), FileToReplacements, FileToNumberValueTrackers});
        ruleCallbacks.emplace_back(ruleactioncallback::RuleActionCallback{
            processRenameEnumFieldRule(), FileToReplacements, FileToNumberValueTrackers});
        ruleCallbacks.emplace_back(ruleactioncallback::RuleActionCallback{
            processRenameEnumFieldRefRule(), FileToReplacements, FileToNumberValueTrackers});
    }

void process::RenameVar::registerMatchers(clang::ast_matchers::MatchFinder &Finder) {
    for (auto &Callback : ruleCallbacks){
        Callback.registerMatchers(Finder);
    }
}
