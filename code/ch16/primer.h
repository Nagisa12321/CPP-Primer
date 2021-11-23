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

#endif
