// io
#include <iostream>
#include <cstdio>

// containers
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <vector>
#include <forward_list>

// algorithm
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int ia[] = { 27, 210, 12, 47, 109, 83 };
    
    int *res = find(begin(ia), end(ia), 42);
    if (res != end(ia))
        *res = 4200;


    for (int i : ia) 
        cout << i << " ";
    cout << endl;

    cout << res << endl;
    cout << end(ia) << endl;
    return 0;
}