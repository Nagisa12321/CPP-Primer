// io
#include <iostream>
#include <cstdio>

// containers
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <vector>
#include <forward_list>

// algorithm
#include <algorithm>
#include <numeric>

#include "Sales_item.h"

using namespace std;

bool compareIsbn(const Sales_item &item1, const Sales_item &item2) {
    return item1.isbn() < item2.isbn();
}

int main() {
    vector<Sales_item> items;

    Sales_item buf;
    while (cin >> buf) 
        items.push_back(buf);

    cout << "==== before sort ====" << endl;
    for (Sales_item item : items)
        cout << item << endl;

    sort(items.begin(), items.end(), compareIsbn);

    cout << "==== after sort ====" << endl;
    for (Sales_item item : items)
        cout << item << endl;
    return 0;
}