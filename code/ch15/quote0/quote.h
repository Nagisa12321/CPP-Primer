#ifndef QUOTE_H
#define QUOTE_H
#include <iostream>
#include <string>

class quote {
public:
    virtual double net_price(std::size_t n) const;
    std::string isbn() const;
};

#endif // QUOTE_H
