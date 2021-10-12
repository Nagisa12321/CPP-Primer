#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    vector<int> iv = {1, 2, 3, 4, 5, 6, 7};
    int some_val = 2;

    vector<int>::iterator iter = iv.begin(),
                          mid = iv.begin() + iv.size() / 2;
    while (iter != mid) {
        if (*iter == some_val) {
            iter = iv.insert(iter, 2 * some_val);
            iter += 2;
        } else ++iter;
    }

    for (int i : iv)
        cout << i << " ";
    cout << endl;
    return 0;
}