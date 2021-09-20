#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<int> v;
    int cur;

    while (cin >> cur) {
        v.push_back(cur);
    }

    // for (vector<int>::iterator it = v.begin(); it != v.end() - 1; it++)
    //     cout << *it << " + " << *(it + 1) << " = " << *it + *(it + 1) << endl;

    // for (int i = 0; i < v.size() - 1; i++) {
    //     cout << v[i] << " + " << v[i + 1] << " = " << v[i] + v[i + 1] << endl;
    // }

    for (vector<int>::iterator it = v.begin(); it != v.end() - v.size() / 2; it++) {
        cout << *it << " + " << *(v.end() - (it - v.begin()) - 1) << " = " << *it + *(v.end() - (it - v.begin()) - 1) << endl;
    }

    // for (int i = 0; i < v.size() / 2; i++) {
    //     cout << v[i] << " + " << v[v.size() - i - 1] << " = " << v[i] + v[v.size() - i - 1] << endl;
    // }
}