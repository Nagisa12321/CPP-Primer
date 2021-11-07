#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H
#include "quote.h"

class bulk_quote : public quote {
public: 
    double net_price(std::size_t) const override;
};

#endif // BULK_QUOTE_H
