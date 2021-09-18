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
    // Segmentation fault (core dumped)
    // v[0] = 42;
    v.push_back(42);
}