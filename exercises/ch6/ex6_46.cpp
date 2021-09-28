#include <iostream>
#include <vector>
#include <cstdio>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;
using std::begin;
using std::end;
using std::map;
/* No.
 * Because std::string::size() is not a constexpr function 
 * and s1.size() == s2.size() is not a constant expression.
 */
inline bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

int main() {
    string s1 = "hello";
    string s2 = "world!!";
    cout << isShorter(s1, s2) << endl;
    return EXIT_SUCCESS;
}