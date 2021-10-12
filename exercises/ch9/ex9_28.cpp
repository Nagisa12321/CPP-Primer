#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>
#include <sstream>

using namespace std;

void func(forward_list<string> &flst, string s1, string s2) {
    auto cur = flst.begin();

    while (cur != flst.end()) {
        if (*cur == s1) {
            flst.insert_after(cur, s2);
            break;
        }
        ++cur;
    }
}

int main() {
    string text = "hello world my name is chen jia ting";
    istringstream iss(text);

    string word;
    forward_list<string> flst;
    while (iss >> word)
        flst.push_front(word);

    for (const string &s : flst)
        cout << s << " ";
    cout << endl;

    func(flst, "world", "after_world");

    for (const string &s : flst)
        cout << s << " ";
    cout << endl;

    return 0;
}