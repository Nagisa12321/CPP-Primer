#ifndef _CPP_PRIMER_5_
#define _CPP_PRIMER_5_

// io
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
// containers
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <vector>
#include <forward_list>
// algorithm
#include <algorithm>
#include <iterator>
#include <numeric>
// memory
#include <memory>
// function
#include <functional>

template <typename T>
void primer_show(const T &t) {
    std::cout << "[";
    for (int i = 0; i < t.size(); ++i) {
        std::cout << t[i];
        if (i != t.size() - 1)
            std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}

template <typename T> std::string primer_debug(const T &t);
template <typename T> std::string primer_debug(T *t);
std::string primer_debug(const std::string &s);
std::string primer_debug(char *str);
std::string primer_debug(const char *str);

template <typename T> std::string primer_debug(const T &t) {
    std::ostringstream oss;
    oss << t;
    return oss.str();
}

template <typename T> std::string primer_debug(T *t) {
    std::ostringstream oss;
    oss << "pointer: " << t;
    if (t) oss << " " << primer_debug(*t);
    else oss << " null pointer";
    return oss.str();
}

std::string primer_debug(const std::string &s) {
    std::ostringstream oss;
    oss << "\"" << s << "\"";
    return oss.str();
}

std::string primer_debug(char *str) {
    return primer_debug(std::string(str));
}

std::string primer_debug(const char *str) {
    return primer_debug(std::string(str));
}

#endif
