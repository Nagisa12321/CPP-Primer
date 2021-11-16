#include "quote.h"
using namespace std;

quote::quote() = default;

quote::quote(const std::string &book, double sales_price)
    : m_bookNo(book),
      m_price(sales_price)
{
    
}

std::string quote::isbn() const {
    return m_bookNo;
}

double quote::net_price(std::size_t n) const {
    return n * m_price;
}

quote::~quote() { cout << "~quote()" << endl; };

double print_total(ostream &os, const quote &item, size_t n) {
    double ret = item.net_price(n);
    os << "isbn: " << item.isbn()
       << "# sold: " << n 
       << " total due: " << ret
       << endl;
    return ret;
}

quote::quote(const quote &q)
    : m_bookNo(q.m_bookNo),
      m_price(q.m_price)
{
    cout << "quote(const quote &)" << endl;
}

quote::quote(quote &&q)
    : m_bookNo(std::move(q.m_bookNo)),
      m_price(std::move(q.m_price))
{
    cout << "quote(quote &&)" << endl;
}

quote &quote::operator=(const quote &q) {
    cout << "quote &quote::operator=(const quote &q)" << endl;
    if (&q == this) return *this;
    this->m_price = q.m_price;
    this->m_bookNo = q.m_bookNo;
    return *this;
}

quote &quote::operator=(quote &&q) {
    cout << "quote &quote::operator=(quote &&q)" << endl;
    this->m_price = std::move(q.m_price);
    this->m_bookNo = std::move(q.m_bookNo);
    return *this;
}

quote* quote::clone() const & {
    return new quote(*this);
}

quote* quote::clone() && {
    return new quote(std::move(*this));
}


#ifdef NDEBUG
void quote::debug() {
    cout << "book no: " << m_bookNo << endl
         << "price: " << m_price << endl;
}
#endif 
