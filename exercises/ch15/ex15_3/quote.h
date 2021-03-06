#ifndef QUOTE_H
#define QUOTE_H
#include <iostream>
#include <string>

class quote {
public:
    quote();
    quote(const std::string &book, double sales_price);
    quote(const quote &q);
    quote(quote &&);
    quote &operator=(const quote &q);
    quote &operator=(quote &&q);

    virtual quote* clone() const &;
    virtual quote* clone() &&;

    std::string isbn() const;

    virtual double net_price(std::size_t n) const;
#ifdef NDEBUG
    virtual void debug();
#endif 
    virtual ~quote();
    
private:
    std::string m_bookNo;

protected:  
    double m_price = 0.0;
};


double print_total(std::ostream &os, const quote &item, std::size_t n);

#endif // QUOTE_H
