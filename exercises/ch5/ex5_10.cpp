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
    for (char c : s) {
        if (tolower(c) == 'a')
            ++aCnt;
        if (tolower(c) == 'e')
            ++eCnt;
        if (tolower(c) == 'i')
            ++iCnt;
        if (tolower(c) == 'o')
            ++oCnt;
        if (tolower(c) == 'u')
            ++uCnt;
    }

    cout << "count of 'a': " << aCnt << endl; 
    cout << "count of 'e': " << eCnt << endl; 
    cout << "count of 'i': " << iCnt << endl; 
    cout << "count of 'o': " << oCnt << endl; 
    cout << "count of 'u': " << uCnt << endl; 
}