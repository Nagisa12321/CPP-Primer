#ifndef ANOTHER_QUOTE_H
#define ANOTHER_QUOTE_H
#include "disc_quote.h"

class disc_quote;
class another_quote : public disc_quote {
public:
    another_quote(const std::string &isbn, double price, double discount, std::size_t limit);
    double net_price(std::size_t n) const override;
#ifdef NDEBUG
    void debug() override;
#endif 
};

#endif // ANOTHER_QUOTE_H
