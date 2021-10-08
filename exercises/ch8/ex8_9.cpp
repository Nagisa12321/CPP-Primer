#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>
#include <sstream>

using namespace std;

istream &read(istream &in) {
    string s;
    while (in >> s)
        cout << s << endl;
        
    in.clear();
    return in;
}

int main() {
    string s = "hello world! My name is jt chen";
    istringstream iss(s);
    read(iss);
    return 0;
}