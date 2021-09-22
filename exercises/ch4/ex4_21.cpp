#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

constexpr size_t sz = 10;
int main() {
    vector<int> v;
    for (int i = 0; i < sz; i++) {
        v.push_back(rand() % 100);
    }

    for (int i : v)
        cout << i << "\t";
    cout << endl;

    for (int &i : v)
        i = (i & 0x1) ? i << 1 : i;

    for (int i : v)
        cout << i << "\t";
    cout << endl;
}