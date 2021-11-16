#include <iostream>
#include "basket.h"
using namespace std;

basket::basket()
    : items(basket::conpare_quote)
{
    
}

void basket::add_item(const std::shared_ptr<quote> &sale) {
    items.insert(sale);
}

void basket::add_item(const quote &sale) {
    cout << "void basket::add_item(const quote &sale)" << endl; 
    items.insert(make_shared<quote>(sale));
}

void basket::add_item(quote &&sale) {
    cout << "void basket::add_item(quote &&sale)" << endl; 
    items.insert(make_shared<quote>(std::move(sale)));
}

double basket::total_receipt(std::ostream &os) const {
    double sum = .0;
    for (auto iter = items.cbegin(); 
              iter != items.cend();
              iter = items.upper_bound(*iter)) {
        sum += print_total(os, **iter, items.count(*iter));
    }
    os << "total sales: " << sum << endl;
    return sum; 
}

bool basket::conpare_quote(std::shared_ptr<quote> q1, std::shared_ptr<quote> q2) {
    return q1->isbn() < q2->isbn();
}
