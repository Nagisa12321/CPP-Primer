// io
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstdio>

// containers
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <vector>
#include <forward_list>

// algorithm
#include <algorithm>
#include <iterator>
#include <numeric>

using namespace std;

void _delete(multimap<string, string> &mm, const string &key) {
    multimap<string, string>::iterator it = mm.find(key);
    if (it == mm.end())
        return;
    mm.erase(it);
}

void show(const multimap<string, string> &mm) {
    cout << "mm: " << endl;
    for (auto enrty : mm) 
        cout << enrty.first << " -> "
             << enrty.second << endl;
}

int main() {
    multimap<string, string> mm{
        {"John", "a"},
        {"John", "b"},
        {"John", "c"},
        {"Alen", "a"},
        {"Alen", "c"},
    };

    show(mm);

    _delete(mm, "John");
    show(mm);

    _delete(mm, "a");
    show(mm);
    
    return 0;
}