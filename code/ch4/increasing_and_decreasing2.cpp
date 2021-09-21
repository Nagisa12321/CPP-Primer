#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<int> v = {1, 4, 2, 8, -5, 7};

    auto pbeg = v.begin();
    while (pbeg != v.end() && *pbeg >= 0) {
        cout << *pbeg++ << endl;
    }
}
