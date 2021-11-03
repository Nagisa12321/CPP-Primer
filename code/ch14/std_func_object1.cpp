#include "primer.h"
using namespace std;

int main() {
    vector<string *> spvec;
    spvec.push_back(new string("a"));
    spvec.push_back(new string("a"));
    spvec.push_back(new string("a"));
    spvec.push_back(new string("a"));

    sort(spvec.begin(), spvec.end());
    for (string *s : spvec) 
        cout << s << endl;
    return 0;
}