// io
#include <iostream>
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

void show(const vector<string> &vec) {
    for (string word : vec) 
        cout << word << " ";
    cout << endl;
}

void elimDups(vector<string> &words) {
    sort(words.begin(), words.end());
    cout << "===== after sort =====" << endl;
    show(words);

    auto end_unique = unique(words.begin(), words.end());
    cout << "==== after unique ==== " << endl;
    show(words);

    words.erase(end_unique, words.end());
    cout << "==== after erase ==== " << endl;
    show(words);
}

int main() {
    vector<string> words;

    string word;
    while (cin >> word) 
        words.push_back(word);

    elimDups(words);

    return 0;
}