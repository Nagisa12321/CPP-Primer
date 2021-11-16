#ifndef QUOTE_H
#define QUOTE_H
#include <iostream>
#include <string>

class quote {
public:
    quote() = delete;
    quote(const quote &q) = default;
    quote(quote &&q) = default;
    quote(const std::string &book, double sales_price);
    virtual ~quote();

    quote &operator=(const quote &) = default;
    quote &operator=(quote &&) = default;

    std::string isbn() const;
    virtual double net_price(std::size_t n) const;
    virtual quote *clone() const &;
    virtual quote *clone() &&;
    
private:
    std::string m_bookNo;

protected:  
    double m_price = 0.0;
};

double print_total(std::ostream &os, const quote &item, std::size_t n);

#endif // QUOTE_H
