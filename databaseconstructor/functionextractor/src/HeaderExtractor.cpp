#include "HeaderExtractor.hpp"
#include <iostream>
#include <memory>
#include <nlohmann/json.hpp>

using namespace clang;

namespace extractor {

class IncludeCallback : public PPCallbacks {
public:
    IncludeCallback(SourceManager &SM) : SM(SM) {}

    void InclusionDirective(SourceLocation HashLoc,
                            const Token &IncludeTok,
                            StringRef FileName,
                            bool IsAngled,
                            CharSourceRange FilenameRange,
                            const FileEntry *File,
                            StringRef SearchPath,
                            StringRef RelativePath,
                            const Module *Imported,
                            SrcMgr::CharacteristicKind FileType) override {
        if (SM.isInMainFile(HashLoc)) {
            nlohmann::json J;
            J["include"] = FileName.str();
            std::cout << J << '\n';
        }
    }

private:
    SourceManager &SM;
};

std::unique_ptr<clang::ASTConsumer> HeaderExtractorAction::CreateASTConsumer(
    clang::CompilerInstance &CI, llvm::StringRef InFile) {
    CI.getPreprocessor().addPPCallbacks(
        std::make_unique<IncludeCallback>(CI.getSourceManager()));
    return std::make_unique<clang::ASTConsumer>();
}

} // namespace extractor
