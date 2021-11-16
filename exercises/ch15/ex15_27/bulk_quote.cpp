#include "bulk_quote.h"
using namespace std;

bulk_quote::bulk_quote() { cout << "bulk_quote::bulk_quote()" << endl; }

double bulk_quote::net_price(std::size_t cnt) const {
    if (cnt >= m_quantity)
        return cnt * (1 - m_discount) * m_price;
    else 
        return cnt * m_price;
    
}

