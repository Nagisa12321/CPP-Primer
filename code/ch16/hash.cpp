#include "primer.h"
using namespace std;

class A{};

class a_hasher {
public:
    std::size_t operator()(const A &a) const { return 1; }
};

bool operator==(const A &, const A &) { return true; }

int main() {
    cout << "test1: " << endl;
    hash<double> double_hash;
    cout << hex << double_hash(1) << endl;
    cout << hex << double_hash(2) << endl;
    cout << hex << double_hash(1) << endl;

    cout << "\ntest2: " << endl;
    unordered_map<A, int, a_hasher> map;
    A a, b, c;
    map[a] = 1;
    cout << map[c] << endl;
    return 0;
}