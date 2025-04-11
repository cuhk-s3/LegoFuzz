#pragma once

#include "ProfilerEntry.hpp"

namespace tagexpression {

extern std::map<int, std::string> Tags; // <id, type>

clang::transformer::RewriteRule TagExpressionRule();
clang::transformer::RewriteRule TagStatementRule();

}