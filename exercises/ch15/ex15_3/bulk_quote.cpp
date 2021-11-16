#include "bulk_quote.h"
using namespace std;

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

bulk_quote::bulk_quote(const bulk_quote &b)
    : quote(b),
      m_min_qty(b.m_min_qty),
      m_discount(b.m_discount)
{
    cout << "bulk_quote::bulk_quote(const bulk_quote &b)" << endl;
}

bulk_quote::bulk_quote(bulk_quote &&b)
    : quote(std::move(b)),
      m_min_qty(std::move(b.m_min_qty)),
      m_discount(std::move(b.m_discount))
{
    cout << "bulk_quote::bulk_quote(bulk_quote &&b)" << endl;
}

bulk_quote &bulk_quote::operator=(const bulk_quote &b) {
    cout << "bulk_quote &bulk_quote::operator=(const bulk_quote &b)" << endl;
    if (&b == this) return *this;
    quote::operator=(b);
    this->m_min_qty = b.m_min_qty;
    this->m_discount = b.m_discount;
    return *this;
}

bulk_quote &bulk_quote::operator=(bulk_quote &&b) {
    cout << "bulk_quote &bulk_quote::operator=(bulk_quote &&b)" << endl;
    quote::operator=(std::move(b));
    this->m_min_qty = std::move(b.m_min_qty);
    this->m_discount = std::move(b.m_discount);
    return *this;
}

quote *bulk_quote::clone() const & {
    return new bulk_quote(*this);
}

quote *bulk_quote::clone() && {
    return new bulk_quote(std::move(*this));
}

bulk_quote::~bulk_quote() {
    cout << "~bulk_quote()" << endl;
}


#ifdef NDEBUG
void bulk_quote::debug() {
    quote::debug();
    cout << "min qty: " << m_min_qty << endl
         << "discount: " << m_discount << endl;
}   
#endif 
