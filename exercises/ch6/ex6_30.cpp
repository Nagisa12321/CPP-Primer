#include <iostream>
#include <vector>
#include <cstdio>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;
using std::begin;
using std::end;
using std::map;

/*
ex6_30.cpp: In function ‘bool str_subrange(const string&, const string&)’:
ex6_30.cpp:25:13: error: return-statement with no value, in function returning ‘bool’ [-fpermissive]
   25 |             return;
      |  
*/

bool str_subrange(const string &str1, const string &str2) {
    if (str1.size() == str2.size())
        return str1 == str2;
    
    auto size = (str1.size() < str2.size()) ?
                str1.size() : str2.size();

    for (decltype(size) i = 0; i != size; ++i)
        if (str1[i] != str2[i])
            return;
}

int main() {
    
    return EXIT_SUCCESS;
}