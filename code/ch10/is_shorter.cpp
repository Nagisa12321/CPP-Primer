// io
#include <iostream>
#include <cstdlib>
#include <cstdio>

// containers
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <vector>
#include <forward_list>

// algorithm
#include <algorithm>
#include <numeric>

// utils
#include <functional>

using namespace std;

bool is_shorter(const string &s, size_t sz) {
    return s.size() >= sz;
}

int main(int argc, char *argv[]) {
    size_t sz = atoi(argv[1]);
    auto _is_shorter_adapter = bind(is_shorter, placeholders::_1, sz);
    
    vector<string> svec; 

    string buf;
    while (cin >> buf) 
        svec.push_back(buf);

    auto cnt = count_if(svec.begin(), svec.end(), _is_shorter_adapter);
    cout << cnt << endl;
    return 0;
}