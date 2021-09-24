#include <iostream>
#include <vector>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int main() {
    vector<int> ivec(15);

    vector<int>::size_type cnt = ivec.size();

    for (vector<int>::size_type ix = 0;
                        ix != ivec.size(); ix++, cnt--) {
        ivec[ix] = cnt;
    }

    for (int i : ivec) 
        cout << i << " ";
    cout << endl;
}