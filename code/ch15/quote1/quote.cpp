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
    cout << "quote::net_price()" << endl;
    return n * m_price;
}

quote::~quote() = default;

