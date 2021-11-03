#include "primer.h"
using namespace std;

modulus<int> _mod;

bool can_mod(const vector<int> &ivec, int i) {
    auto cm = [i](const int &val) { return _mod(val, i) == 0; };
    return find_if_not(ivec.begin(), ivec.end(), cm) == ivec.end();
}

int main() {
    vector<int> ivec1{2, 4, 6, 8, 10};
    vector<int> ivec2{1, 2, 4, 6, 8, 10};
    cout << can_mod(ivec1, 2) << endl;
    cout << can_mod(ivec2, 2) << endl;
    return 0;
}