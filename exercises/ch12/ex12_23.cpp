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
#include <cstring>

// memory
#include <memory>

using namespace std;

int main() {
    int sz = 100;
    char *res = new char[sz]();
    strcat(res, "hello ");
    strcat(res, "world!");
    printf("%s\n", res);
    delete [] res;

    string s1("hello");
    string s2(" world!");

    char *c_str = new char[(s1 + s2).size() + 1];
    strcpy(c_str, (s1 + s2).c_str());

    printf("%s\n", c_str);
    delete [] c_str;
    
    return 0;
}