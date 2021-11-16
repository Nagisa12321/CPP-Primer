#include "bulk_quote.h"
using namespace std;

bulk_quote::bulk_quote(const std::string &book, double sales_price, std::size_t n, double discount)
    : disc_quote(book, sales_price, n, discount)
{
    
}

double bulk_quote::net_price(std::size_t cnt) const {
    if (cnt >= m_quantity)
        return cnt * (1 - m_discount) * m_price;
    else 
        return cnt * m_price;
    
}

