#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

string make_name(string name, const string &front, const string &back) {
    return name.insert(0, front + ' ', 0, front.size() + 1)
               .insert(name.size(), ' ' + back, 0, back.size() + 1);
}

int main() {
    string name = make_name("Jiating", "MR", "Chen");
    cout << name << endl;
    return 0;
}