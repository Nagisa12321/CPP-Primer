#include "Vec.h"
#include <vector>
#include <iostream>
using namespace std;

template <typename T>
void show(const Vec<T> &tvec) {
    cout << "[";
    for (int i = 0; i < tvec.size(); ++i) {
        cout << tvec[i];
        if (i != tvec.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    cout << "\ntest1 start: " << endl;
    Vec<int> ivec1;
    for (int i = 0; i < 10; ++i)
        ivec1.push_back(i);
    show(ivec1);

    cout << "\ntest2 start: " << endl;
    Vec<int> ivec2 = ivec1;
    show(ivec2);
    show(ivec1);

    cout << "\ntest3 start: " << endl;
    Vec<int> ivec3(ivec2);
    Vec<int>::iterator cur = ivec3.begin(); 
    while (cur != ivec3.end())
        cout << *cur++ << " ";
    cout << endl;
    ivec3 = ivec1;

    cout << "\ntest4 start: " << endl;
    Vec<string> svec1;
    for (int i = 0; i < 0xff; ++i) {
        svec1.push_back(to_string(i));
        cout << svec1.size() << ", " << svec1.capacity() << endl;
    }
}