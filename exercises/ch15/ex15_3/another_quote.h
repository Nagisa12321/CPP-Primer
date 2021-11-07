#ifndef ANOTHER_QUOTE_H
#define ANOTHER_QUOTE_H
#include "quote.h"

class quote;
class another_quote : public quote {
public:
    another_quote(const std::string &isbn, double price, double discount, std::size_t limit);
    double net_price(std::size_t n) const override;
#ifdef NDEBUG
    void debug() override;
#endif 
private:
    double          m_discount;
    std::size_t     m_limit;
};

#endif // ANOTHER_QUOTE_H
