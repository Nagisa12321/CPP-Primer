#include "primer.h"
using namespace std;

using namespace std;

class book {
    friend bool operator==(const book &, const book &);
public:
    book(string author, double price) : m_author(author), m_price(price) {}
private:
    string m_author;
    double m_price;
};

bool operator==(const book &b1, const book &b2) {
    return b1.m_author == b2.m_author && b1.m_price == b2.m_price;
}

int main() {
    book b1("hello", 10.0);
    book b2("hello", 10.0);
    book b3("hello", 12.0);
    cout << (b1 == b2) << endl;
    cout << (b1 == b3) << endl;
}