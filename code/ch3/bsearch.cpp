#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<int> vec;
    int cur;
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        cin >> cur;
        vec.push_back(cur);
    }

    int target;
    cin >> target;
    vector<int>::iterator lo = vec.begin();
    vector<int>::iterator hi = vec.end() - 1;

    while (lo <= hi) {
        vector<int>::iterator mid = lo + (hi - lo) / 2;
        if (*mid == target) {
            cout << *mid << endl;
            return 0;
        } else if (*mid < target) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    cout << -1 << endl;
}