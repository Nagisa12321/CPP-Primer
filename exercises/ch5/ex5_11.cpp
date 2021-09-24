#include <iostream>
#include <vector>
#include <cstdio>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int main() {
    string s;
    cin >> s;
    unsigned aCnt = 0;
    unsigned eCnt = 0;
    unsigned iCnt = 0;
    unsigned oCnt = 0;
    unsigned uCnt = 0;
    unsigned spaceCnt = 0;
    unsigned enterCnt = 0;
    unsigned tabCnt = 0;
    for (char c : s) {
        if (tolower(c) == 'a')
            ++aCnt;
        else if (tolower(c) == 'e')
            ++eCnt;
        else if (tolower(c) == 'i')
            ++iCnt;
        else if (tolower(c) == 'o')
            ++oCnt;
        else if (tolower(c) == 'u')
            ++uCnt;
        else if (c == ' ')
            ++spaceCnt;
        else if (c == '\t')
            ++tabCnt;
        else if (c == '\n')
            ++enterCnt;
    }

    cout << "count of 'a': " << aCnt << endl; 
    cout << "count of 'e': " << eCnt << endl; 
    cout << "count of 'i': " << iCnt << endl; 
    cout << "count of 'o': " << oCnt << endl; 
    cout << "count of 'u': " << uCnt << endl; 
    cout << "count of ' ': " << spaceCnt << endl; 
    cout << "count of '\\t': " << tabCnt << endl; 
    cout << "count of '\\n': " << enterCnt << endl; 
}