#include "disc_quote.h"

disc_quote::disc_quote() = delete;

disc_quote::disc_quote(const std::string book, double price, std::size_t qty, double disc)
    : quote(book, price),
      m_quantity(qty),
      m_discount(disc)
{
    
}

