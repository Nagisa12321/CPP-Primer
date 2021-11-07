#include "bulk_quote.h"
using namespace std;

bulk_quote::bulk_quote() = default;

bulk_quote::bulk_quote(const std::string &book, double sales_price, std::size_t n, double discount)
    : quote(book, sales_price),
      m_min_qty(n),
      m_discount(discount)
{
    
}

double bulk_quote::net_price(std::size_t cnt) const {
    if (cnt >= m_min_qty)
        return cnt * (1 - m_discount) * m_price;
    else 
        return cnt * m_price;
    
}

