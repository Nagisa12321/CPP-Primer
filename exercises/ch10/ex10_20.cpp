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

using namespace std;

int main(int argc, char *argv[]) {
    vector<string> svec;

    int sz = atoi(argv[1]);
    string word;
    while (cin >> word)
        svec.push_back(word);

    vector<string>::difference_type cnt =
        count_if(svec.begin(), svec.end(), [=](const string &s) -> bool {
            return s.size() > sz;
        });

    cout << cnt << endl;

    return 0;
}