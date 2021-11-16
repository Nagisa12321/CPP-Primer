#ifndef DISC_QUOTE_H
#define DISC_QUOTE_H
#include "quote.h"

class quote;
class disc_quote : public quote {
public:
    disc_quote(const std::string book, double price, std::size_t qty, double disc);
    double net_price(std::size_t n) const override = 0;

protected:
    std::size_t m_quantity;
    double m_discount;
};

#endif // DISC_QUOTE_H
