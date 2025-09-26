#include "HeaderExtractorActionFactory.hpp"
#include <iostream>

std::unique_ptr<clang::FrontendAction> HeaderExtractorActionFactory::create() {
    return std::make_unique<extractor::HeaderExtractorAction>();
}
