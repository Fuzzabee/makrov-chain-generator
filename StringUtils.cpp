#include <iostream>
#include <string>
#include <vector>

#include "StringUtils.h"

std::string StringUtils::trim(const std::string s) {
    int leftIndex = 0;
    int rightIndex = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) != ' ') {
            leftIndex = i;
            break;
        }
    }

    if (leftIndex == 0) { return ""; }

    for (int i = s.length() - 1; i > leftIndex; i--) {
        if (s.at(i) != ' ') {
            rightIndex = i;
            if (leftIndex == rightIndex) { return ""; }
            break;
        }
    }

    int newStringLength = rightIndex - leftIndex + 1;
    std::cout << "l: " << leftIndex << " r: " << rightIndex;
    std::cout << "\"" << s.substr(leftIndex, newStringLength) << "\"" << "\n";
    return s.substr(leftIndex, newStringLength);
}

std::vector<std::string> StringUtils::split(const std::string s, const char delim) {
    std::vector<std::string> splitString;
    if (s.empty()) { return splitString; }
    
    int lastSplitIndex = 0;
    int tokenLength = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s.at(i) == delim) {
            tokenLength = i - lastSplitIndex;
            if (tokenLength > 1) {
                splitString.push_back(s.substr(lastSplitIndex, tokenLength));
            }
            lastSplitIndex = i + 1;
        }
    }

    int finalTokenLength = s.length() - lastSplitIndex;
    if (finalTokenLength > 0) {
        splitString.push_back(s.substr(lastSplitIndex, finalTokenLength));
    }

    return splitString;
}