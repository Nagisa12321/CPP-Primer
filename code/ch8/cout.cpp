#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    cout << "hi" << endl;
    cout << "hi" << ends;
    cout << "hi" << flush;

    cout << unitbuf;
    cout << "\nhello world\n";
    cout << nounitbuf;

    ostream *os = cin.tie();
    cout << os << endl;
    cout << &cout << endl;

    cout.tie(&cout);
    os = cout.tie();
    cout << os << endl;

    return EXIT_SUCCESS;
}