#pragma once

#include <memory>
#include <clang/Tooling/Tooling.h>
#include "HeaderExtractor.hpp"

class HeaderExtractorActionFactory : public clang::tooling::FrontendActionFactory {
public:
    std::unique_ptr<clang::FrontendAction> create() override;
};
