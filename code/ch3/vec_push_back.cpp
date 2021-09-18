#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<int> v;
    cout << v.size() << endl;
    for (int i = 0; i != 100; ++i)
        v.push_back(i);
    cout << v.size() << endl;
}