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
using std::map;

/**
 * s: the string to find
 * c: the char to find
 * occours: the number of c appeared
 * return: the first index tha c appeared  
 */
string::size_type find_char(const string &s, char c, string::size_type &occours) {
    string::size_type ret = s.size();
    occours = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            if (ret == s.size())
                ret = i;
            occours++;
        }
    }
    return ret;
}

int main() {
    string s = "hello world!";
    string::size_type occours = 0;
    string::size_type idx = find_char(s, 'o', occours);
    cout << "the first appeared index is " << idx << ", occours " 
         << occours << " times!" << endl;
    return 0;
}