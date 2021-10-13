#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>
#include <fstream>

using namespace std;

int main() {
    string format = "aceimnorsuvwxz";
    ifstream fis("./letter.txt");

    string max_word;
    string word;

    while (fis >> word) {
        if (word.find_first_not_of(format) == string::npos) {
            if (word.size() > max_word.size())
                max_word = word;
        }
    }

    cout << max_word << endl;
    return 0;
}