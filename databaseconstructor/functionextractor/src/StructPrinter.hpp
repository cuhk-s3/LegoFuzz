#pragma once
#include <clang/ASTMatchers/ASTMatchFinder.h>

using namespace clang;
using namespace ast_matchers;

namespace printer
{
    
class StructPrinter : public clang::ast_matchers::MatchFinder::MatchCallback {
    public:
        StructPrinter();
        StructPrinter(const StructPrinter &) = delete;
        StructPrinter(StructPrinter &&) = delete;
        void 
        run(const clang::ast_matchers::MatchFinder::MatchResult &Result) override;
};
std::string getStructAsText(const Decl *F, const SourceManager &SM, const LangOptions &lp);
} // namespace printer
