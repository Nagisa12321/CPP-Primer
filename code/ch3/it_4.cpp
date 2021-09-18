#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<int> v;
    const vector<int> cv;

    auto it = v.begin();    // vector<int>::iterator
    auto cit = cv.begin();  // vector<int>::const_iterator
    auto cit1 = v.cbegin(); // vector<int>::const_iterator
}