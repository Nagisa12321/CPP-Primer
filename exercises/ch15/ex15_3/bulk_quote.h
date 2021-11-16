#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H
#include "quote.h"

class bulk_quote : public quote {
public: 
    bulk_quote() = default;
    bulk_quote(const std::string &, double, std::size_t, double);
    bulk_quote(const bulk_quote &b);
    bulk_quote(bulk_quote &&b);
    ~bulk_quote();  

    bulk_quote &operator=(const bulk_quote &b);
    bulk_quote &operator=(bulk_quote &&b);

    quote *clone() const &;
    quote *clone() &&;

    double net_price(std::size_t) const override;
#ifdef NDEBUG
    void debug() override;
#endif 
private:
    std::size_t m_min_qty = 0;
    double m_discount;
};

#endif // BULK_QUOTE_H
