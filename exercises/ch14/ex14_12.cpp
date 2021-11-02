#include "primer.h"
using namespace std;

using namespace std;

class book {
    friend bool operator==(const book &, const book &);
    friend ostream &operator<<(ostream &, const book &);
    friend istream &operator>>(istream &, book &);
public:
    book() = default;
    book(string author, double price) : m_author(author), m_price(price) {}
private:
    string m_author;
    double m_price = .0;
};

bool operator==(const book &b1, const book &b2) {
    return b1.m_author == b2.m_author && b1.m_price == b2.m_price;
}
 
ostream &operator<<(ostream &out, const book &b) {
    out << b.m_author << ": " << b.m_price;
    return out;
}

istream &operator>>(istream &out, book &b) {
    cin >> b.m_author >> b.m_price;
    if (!cin) b = book();
    return cin;
}

int main() {
    book b1("hello", 10.0);
    book b2("hello", 10.0);
    book b3("hello", 12.0);
    cout << (b1 == b2) << endl;
    cout << (b1 == b3) << endl;

    cout << b1 << endl;
    cout << b2 << endl;
    cin >> b3;
    cout << b3 << endl;
}