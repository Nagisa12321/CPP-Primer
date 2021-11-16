#ifndef BASKET_H
#define BASKET_H
#include <memory>
#include <iostream>
#include <set>
#include "quote.h"

class basket {
public: 
    basket();
    void add_item(const std::shared_ptr<quote> &sale);
    void add_item(const quote &sale);
    void add_item(quote &&sale);
    double total_receipt(std::ostream &os) const;
private:
    static bool conpare_quote(std::shared_ptr<quote> q1, std::shared_ptr<quote> q2);
    std::multiset<std::shared_ptr<quote>, decltype(basket::conpare_quote) *> items;
};


#endif // BASKET_H
