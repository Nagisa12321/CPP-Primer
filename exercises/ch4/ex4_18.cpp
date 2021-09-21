#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int main() {
    // vector<int> v = {1, 4, 2, 8, -5, 7};
    vector<int> v = {-5};

    vector<int>::iterator pbeg = v.begin();
    while (pbeg != v.end() && *pbeg >= 0) {
        cout << *++pbeg << endl;
    }

    // It will print from the second element 
    // and dereference v.end() at last, which is a UB.
}