#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

int main() {

    int i;
    cin >> i;
    cout << cin.rdstate() << endl;
    cin.clear();
    // cin.ignore();
    cin.sync();
    cout << cin.rdstate() << endl;

    int j;
    cin >> j;
    cout << cin.rdstate() << endl;
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;

    return EXIT_SUCCESS;
}