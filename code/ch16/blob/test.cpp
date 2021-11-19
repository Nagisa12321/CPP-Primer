#include <iostream> 
#include "blob.h"
using namespace std;

int main() {
    blob<int> b;
    b.push_back(1);
    b.push_back(2);
    b.push_back(3);

    for (int i = 0; i < b.size(); ++i) 
        cout << b[i] << endl;

    blob<string> sb{"a", "an", "the"};
    for (int i = 0; i < sb.size(); ++i) 
        cout << sb[i] << endl;

    vector<int> ivec;
    ivec.push_back(1);
}