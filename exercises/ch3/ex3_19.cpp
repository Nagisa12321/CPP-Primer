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
    vector<int> v1;
    for (int i = 0; i < 10; i++)
        v1.push_back(42);

    vector<int> v2(10, 42);

    vector<int> v3 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
}