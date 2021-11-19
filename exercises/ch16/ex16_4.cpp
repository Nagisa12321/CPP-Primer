#include "primer.h"
using namespace std;

template <typename iterator_T, typename T>
iterator_T my_find(iterator_T iter1, iterator_T iter2, const T &t) {
    while (iter1 != iter2) {
        if (*iter1 == t)
            return iter1;
        ++iter1;
    }
    return iter2;
}

int main() {
    vector<int> ivec{1, 4, 2, 8, 5, 7};
    list<string> slst{"a", "an", "the"};
    vector<int>::iterator res1 = my_find(ivec.begin(), ivec.end(), 8);
    list<string>::iterator res2 = my_find(slst.begin(), slst.end(), "the");
    cout << "res1: " << *res1 << endl;
    cout << "res2: " << *res2 << endl;
    
    return 0;
}