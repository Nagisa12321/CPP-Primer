#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int main() {
    string s = "word";
    // string p1 = s + s[s.size() - 1] == 's' ? "" : "s";
    string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
}