#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;
/**
 * alloc mem of 1024 to the input string
 * and then resize the vec to 1.5
 */ 
int main() {
    vector<string> svec;
    svec.reserve(1024);
    string word;
    while (cin >> word) 
        svec.push_back(word);
    
    svec.resize(svec.size() + svec.size() / 2);
    return 0;
}