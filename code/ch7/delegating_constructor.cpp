#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

struct sales_data {
public:
    sales_data() : sales_data("", 0, 0) {};
    sales_data(const string &s) : sales_data(s, 0, 0) {}
    sales_data(istream &) : sales_data() { read(cin, *this); }
    sales_data(const string &s, unsigned n, double p) :
        bookNo(s), unit_solds(n), revenue(p * n) {
    }

    string isbn() const {
        return this->bookNo;
    }
    sales_data &combine(const sales_data &);
    double avg_price() const;

private:
    string bookNo;
    unsigned unit_solds;
    double revenue = 0.0;
};

sales_data add(const sales_data &, const sales_data &);
std::ostream &print(std::ostream &, const sales_data &);
std::istream &read(std::istream &, const sales_data &);

double sales_data::avg_price() const {
    return this->revenue;
}

sales_data &sales_data::combine(const sales_data &data) {
    this->unit_solds += data.unit_solds;
    this->revenue += data.revenue;
    return *this;
}

int main() {
    
    return EXIT_SUCCESS;
}