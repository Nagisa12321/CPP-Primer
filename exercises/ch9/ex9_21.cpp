#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    vector<string> vec;
    auto iter = vec.begin();
    string word;
    while (cin >> word)
        iter = vec.insert(iter, word);

    for (const string &s : vec)
        cout << s << endl;
    return 0;
}