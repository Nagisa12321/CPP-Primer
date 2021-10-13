#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

int main() {
    string s = "hello world";
    auto idx0 = s.find("world");
    auto idx1 = s.find("worlde");

    cout << idx0 << endl;
    cout << idx1 << endl;
    return 0;
}