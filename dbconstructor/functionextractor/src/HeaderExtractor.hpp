#pragma once

#include <clang/Frontend/CompilerInstance.h>
#include <clang/Frontend/FrontendAction.h>
#include <clang/Lex/PPCallbacks.h>
#include <clang/Tooling/Core/Replacement.h>
#include <clang/Lex/Preprocessor.h>
#include <map>
#include <string>
#include <clang/ASTMatchers/ASTMatchFinder.h>

namespace extractor {

class HeaderExtractorAction : public clang::ASTFrontendAction {
public:
    HeaderExtractorAction() = default;

protected:
    std::unique_ptr<clang::ASTConsumer> CreateASTConsumer(
        clang::CompilerInstance &CI, llvm::StringRef InFile) override;
};

} // namespace extractor
