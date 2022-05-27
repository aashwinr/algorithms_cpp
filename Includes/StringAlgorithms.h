#pragma once

#include "Types.h"
#include <string>
#include <vector>

namespace StringAlgorithms {
    std::vector<std::string> Split(const std::string &haystack, const std::string& needle);
    std::string Substring(const std::string& str, usize begin, usize end);
    std::string Rotate(const std::string& str, isize rotate_num);
    namespace Search {
        usize AhoCorasick(const std::string& haystack, const std::string& needle);
        usize SuffixArrays(const std::string& haystack, const std::string& needle);
        usize BurrowsWheeler(const std::string& haystack, const std::string& needle);
    }
}