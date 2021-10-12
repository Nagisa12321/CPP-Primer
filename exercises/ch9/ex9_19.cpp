#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>
#include <deque>
#include <list>

using namespace std;

int main() {
    list<string> deq;
    string word;
    while (cin >> word) 
        deq.push_back(word);

    for (auto it = deq.begin(); it != deq.end(); ++it)
        cout << *it << endl;
    
    return 0;
}