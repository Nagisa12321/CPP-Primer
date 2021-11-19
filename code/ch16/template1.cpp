#include "primer.h"
using namespace std;

template <typename T>
int compare(const T &v1, const T &v2) {
    cout << "compare T" << endl;
    if (v1 < v2) return -1;
    else if (v2 < v1) return 1;
    else return 0;
}

int main() {
    cout << compare(1, 0) << endl;   
    vector<int> vec1{1, 2, 3}, vec2{4, 5, 6};
    cout << compare(vec1, vec2) << endl;   
    return 0;
}