#include <iostream>
#include <vector>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int main() {
    size_t int_sz = sizeof(int);
    cout << "int_sz: " << int_sz << endl;

    Sales_item item, *p;

    size_t _Sale_item_sz = sizeof (Sales_item);
    cout << "_Sale_item_sz: " << _Sale_item_sz << endl;

    size_t item_sz = sizeof item;
    cout << "item_sz: " << item_sz << endl;

    size_t p_sz = sizeof p;
    cout << "p_sz: " << p_sz << endl;

    size_t pp_sz = sizeof *p;
    cout << "pp_sz: " << pp_sz << endl;

    size_t revenue_sz0 = sizeof item.revenue;
    cout << "revenue_sz0: " << revenue_sz0 << endl;

    size_t revenue_sz1 = sizeof(Sales_item::revenue);
    cout << "revenue_sz1: " << revenue_sz1 << endl;

    string s1 = "hey";
    string s2 = "hello, world";
    size_t str_sz1 = sizeof s1;
    size_t str_sz2 = sizeof s2;

    cout << "str_sz1: " << str_sz1 << endl;
    cout << "str_sz2: " << str_sz2 << endl;
}