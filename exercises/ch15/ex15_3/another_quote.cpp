#include "another_quote.h"
using namespace std;
another_quote::another_quote(const std::string &isbn, double price, double discount, std::size_t limit)
    : quote(isbn, price),
      m_discount(discount),
      m_limit(limit)
{
    
}

double another_quote::net_price(std::size_t n) const {
    if (n > m_limit) {
        return m_limit * m_discount * m_price + (n - m_limit) * m_price;
    } else {
        return n * m_discount * m_price;
    }
}

#ifdef NDEBUG
void another_quote::debug() {
    quote::debug();
    cout << "limit: " << m_limit << endl
         << "discount: " << m_discount << endl;
}   
#endif 

// int main() {
//     another_quote q("isbn", 10, 0.8, 10);
//     print_total(cout, q, 20);
// }