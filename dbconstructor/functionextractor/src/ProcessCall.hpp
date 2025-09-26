#pragma once

#include "RuleActionCallback.hpp"
#include "FunctionProcess.hpp"

namespace process {

    clang::transformer::RewriteRule processCallRule();
    clang::transformer::RewriteRule processExternRule();

} // namespace process