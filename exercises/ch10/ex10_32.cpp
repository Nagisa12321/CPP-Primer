// io
#include <iostream>
#include <cstdlib>
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
#include <iterator>

#include "Sales_item.h"

using namespace std;

bool compare_isbn(const Sales_item &item1, const Sales_item &item2) {
    return item1.isbn() < item2.isbn();
}

int main() {
    istream_iterator<Sales_item> item_it(cin), item_eof;
    ostream_iterator<Sales_item> item_it_o(cout, "\n");
    vector<Sales_item> item_vec(item_it, item_eof);
    sort(item_vec.begin(), item_vec.end(), compare_isbn);
    cout << "after sort: " << endl;
    copy(item_vec.begin(), item_vec.end(), item_it_o);

    auto it = item_vec.begin();
    vector<Sales_item> _res;
    while (it != item_vec.end()) {
        auto isbn = it->isbn();
        auto next = find_if(it, item_vec.end(), [isbn](const Sales_item &item) {
            return item.isbn() != isbn;
        });
        _res.push_back(accumulate(it, next, Sales_item(it->isbn())));
        it = next;
    }   
    cout << "result is: " << endl;
    copy(_res.begin(), _res.end(), item_it_o);
    return 0;
}