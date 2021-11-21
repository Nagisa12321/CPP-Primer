#include <iostream> 
#include <list>
#include "blob.h"
using namespace std;

template <typename T>
void print(const blob<T> &b) {
    cout << "[";
    for (int i = 0; i < b.size(); ++i) {
        cout << b[i];
        if (i != b.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;
}

int main() {

    cout << "\ntest1 start: " << endl;
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

    cout << "\ntest2 start: " << endl;
    blob<int> iblob{1, 2, 3, 4, 5};
    blob<int>::iterator cur = iblob.begin();
    while (cur != iblob.end())
        cout << *cur++ << endl;
    
    cout << "\ntest3 start: " << endl;
    typedef blob<string> str_blob;
    str_blob sb1{"hi", "hello"};
    print(sb1);

    cout << "\ntest4 start: " << endl;  
    vector<int> ivec1{0, 1, 2, 3, };
    blob<int> b1(ivec1.begin(), ivec1.end());
    print(b1);

    cout << "\ntest5 start: " << endl;
    int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<long> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<const char *> w = {"now", "is", "the", "time"};

    blob<int> a1(begin(ia), end(ia));
    blob<int> a2(vi.begin(), vi.end());
    blob<string> a3(w.begin(), w.end());
    print(a1);
    print(a2);
    print(a3);
    return 0;
}