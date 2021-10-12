#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>

using namespace std;

int main() {
    list<string> lst{"hello", "world"};
    list<string>::iterator iter = lst.begin();
    string word;
    while (cin >> word)
        iter =  lst.insert(iter, word);

    for (const string &s : lst)
        cout << s << endl;

    return 0;
}