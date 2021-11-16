#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H
#include "quote.h"
#include "disc_quote.h"

class disc_quote;
class bulk_quote : public disc_quote {
public: 
    bulk_quote(const std::string &, double, std::size_t, double);

    double net_price(std::size_t) const override;

};

#endif // BULK_QUOTE_H
