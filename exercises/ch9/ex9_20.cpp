#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <deque>

using namespace std;

void show(const deque<int> &deq) {
    cout << " ----------- " << endl;
    for (int i : deq)
        cout << i << " ";
    cout << endl; 
} 

int main() {
    list<int> li;
    int buf;
    while (cin >> buf)
        li.push_back(buf);
    
    deque<int> deq_0;
    deque<int> deq_1;

    for (int i : li) {
        if (i % 2) deq_0.push_back(i);
        else deq_1.push_back(i);
    }

    show(deq_0);
    show(deq_1);    
    return 0;
}