#pragma once

#include "RuleActionCallback.hpp"

namespace process
{

class RenameVar {
    public:
        RenameVar(std::map<std::string, clang::tooling::Replacements> &FileToReplacements);
        RenameVar(const RenameVar &) = delete;
        RenameVar(RenameVar &&) = delete;

        void registerMatchers(clang::ast_matchers::MatchFinder &Finder);

    private:
        std::map<std::string, clang::tooling::Replacements> &FileToReplacements;
        std::vector<ruleactioncallback::RuleActionCallback> ruleCallbacks;
        std::map<std::string, int> FileToNumberValueTrackers;
};

} // namespace process
