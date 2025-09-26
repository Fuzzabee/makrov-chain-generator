#ifndef STRINGUTILS_H
#define STRINGUTILS_H

#include <string>
#include <vector>

class StringUtils {
public:
    static std::string trim(const std::string s);
    static std::vector<std::string> split(const std::string s, const char delim);
};

#endif