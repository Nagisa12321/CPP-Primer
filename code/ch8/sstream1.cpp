#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>
#include <sstream>

using namespace std;

int main() {
    string s = "hello";
    stringstream strm(s);
    strm << ", world" << flush;
    cout << s << endl;
    cout << strm.str() << endl; 
    return 0;
}