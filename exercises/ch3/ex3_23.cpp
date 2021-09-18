#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

void print(vector<int> v) {
    for (auto i : v)
        cout << i << " ";
    cout << endl;
}

int main() {
    vector<int> v;

    for (int i = 0; i < 10; i++)
        v.push_back(i);

    print(v);

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        (*it) *= 2;
    }

    print(v);
}