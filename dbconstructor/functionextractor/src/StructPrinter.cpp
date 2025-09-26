#pragma once
#include <clang/Lex/Lexer.h>

#include <nlohmann/json.hpp>
#include <nlohmann/json_fwd.hpp>
#include <iostream>

#include "StructPrinter.hpp"

using namespace clang;
using namespace ast_matchers;

namespace printer {

std::string getStructAsText(const Decl *F,
                            const SourceManager &SM, const LangOptions &lp) {
  auto SR = CharSourceRange::getTokenRange(F->getSourceRange());
  return Lexer::getSourceText(SR, SM, lp).str();
}

StructPrinter::StructPrinter(){}

void StructPrinter::run(const clang::ast_matchers::MatchFinder::MatchResult &Result) {
    nlohmann::json J;

    if (const auto *F = Result.Nodes.getNodeAs<clang::TypedefDecl>("typedef")) {
        const auto *UnderlyingType = F->getUnderlyingType().getTypePtrOrNull();
        if (!UnderlyingType) return;

        if (const auto *Record = UnderlyingType->getAs<clang::RecordType>()) {
            if (Record->getDecl()->isStruct()) {
                const auto &SM = *Result.SourceManager;
                J["typedef"] = getStructAsText(F, *Result.SourceManager, Result.Context->getLangOpts());
                std::cout << J << '\n';
            }
        }
    }

    if (const auto *F = Result.Nodes.getNodeAs<clang::RecordDecl>("struct")) {
        if (F->isStruct()) {
            const auto &SM = *Result.SourceManager;
            J["struct"] = getStructAsText(F, *Result.SourceManager, Result.Context->getLangOpts());
            std::cout << J << '\n';
        }
    }
}


} // namespace printer