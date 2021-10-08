#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>

using namespace std;

int main() {
    list<string> a{"hello", "world", "hi"};
    auto it1 = a.begin();
    auto it2 = a.rbegin();
    auto it3 = a.cbegin();
    auto it4 = a.crbegin();

    cout << (it1 == it3) << endl;
    return 0;
}