#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>

using namespace std;

bool equals(list<int> li, vector<int> vec) {
    if (li.size() != vec.size())
        return false;

    list<int>::iterator list_iterator = li.begin();
    vector<int>::iterator vector_iterator = vec.begin();
    while (list_iterator != li.end())
        if (*list_iterator++ - *vector_iterator++) 
            return false;
    return true;
}

int main() {
    vector<int> vec1 = {1, 2, 3};
    list<int> l1 = {1, 2, 3};
    list<int> l2 = {1, 2, 3, 4};
    list<int> l3 = {1, 2, 4};

    cout << equals(l1, vec1) << endl;
    cout << equals(l2, vec1) << endl;
    cout << equals(l3, vec1) << endl;
    return 0;
}