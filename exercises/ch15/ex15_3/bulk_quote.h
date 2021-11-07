#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H
#include "quote.h"

class bulk_quote : public quote {
public: 
    bulk_quote();
    bulk_quote(const std::string &, double, std::size_t, double);

    double net_price(std::size_t) const override;
#ifdef NDEBUG
    void debug() override;
#endif 
private:
    std::size_t m_min_qty = 0;
    double m_discount;
};

#endif // BULK_QUOTE_H
