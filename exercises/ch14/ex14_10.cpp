#include "primer.h"
using namespace std;

struct sales_data {
    friend sales_data operator+(const sales_data &, const sales_data &);
    friend ostream &operator<<(ostream &, const sales_data &);
    friend istream &operator>>(istream &, sales_data &);

public:
    sales_data() = default;
    sales_data(const string &s) : bookNo(s) {}
    sales_data(const string &s, unsigned n, double p) : bookNo(s), unit_solds(n), revenue(p * n) {}

    sales_data &operator+=(const sales_data &data) {
        *this = *this + data;
        return *this;
    }

    string isbn() const { return this->bookNo; }
    sales_data &combine(const sales_data &);
    double avg_price() const;

private:
    string bookNo;
    unsigned unit_solds;
    double revenue = 0.0;
};

istream &operator>>(istream &in, sales_data &data) {
    decltype(data.bookNo) no;
    decltype(data.revenue) rev;
    decltype(data.unit_solds) solds;

    cin >> no >> rev >> solds;
    if (cin) {
        data.bookNo = no;
        data.revenue = rev;
        data.unit_solds = solds;
    } else 
        data = sales_data();
    return cin;
}

ostream &operator<<(ostream &out, const sales_data &data) {
    cout << data.bookNo << " " << data.revenue << " " << data.unit_solds;
    return cout;
}

double sales_data::avg_price() const {
    return this->revenue;
}

sales_data &sales_data::combine(const sales_data &data) {
    this->unit_solds += data.unit_solds;
    this->revenue += data.revenue;
    return *this;
}

sales_data operator+(const sales_data &data1, const sales_data &data2) {
    if (data1.bookNo != data2.bookNo) return sales_data();
    return sales_data(data1.bookNo, data1.unit_solds + data2.unit_solds, data1.revenue + data2.revenue);
}


int main() {
    sales_data data1, data2;
    cin >> data1 >> data2;
    cout << data1 << endl;
    cout << data2 << endl;
    return 0;
}