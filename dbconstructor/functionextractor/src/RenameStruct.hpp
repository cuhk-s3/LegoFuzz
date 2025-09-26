#pragma once

#include "RuleActionCallback.hpp"

namespace process {

class RenameStruct {
  public:
    RenameStruct(std::map<std::string, clang::tooling::Replacements> &FileToReplacements);
    RenameStruct(const RenameStruct &) = delete;
    RenameStruct(RenameStruct &&) = delete;

    void registerMatchers(clang::ast_matchers::MatchFinder &Finder);

  private:
    std::map<std::string, clang::tooling::Replacements> &FileToReplacements;
    std::vector<ruleactioncallback::RuleActionCallback> ruleCallbacks;
    std::map<std::string, int> FileToNumberValueTrackers;
};

}
