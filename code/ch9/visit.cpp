#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    vector<int> c = {1, 4, 2, 8, 5, 7};
    if (!c.empty()) {
        auto val = *c.begin(), val2 = c.front();
        auto last = c.end();
        auto val3 = *(--last);
        auto val4 = c.back();

        cout << val << endl;
        cout << val2 << endl;

        cout << val3 << endl;
        cout << val4 << endl;  
    }

    return 0;
}