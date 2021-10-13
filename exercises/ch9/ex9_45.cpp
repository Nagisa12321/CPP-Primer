#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

string make_name(string name, const string &front, const string &back) {
    return name.insert(0, front + ' ').append(' '+ back);
}

int main() {
    string name = make_name("Jiating", "MR", "Chen");
    cout << name << endl;
    return 0;
}