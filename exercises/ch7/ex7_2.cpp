#include <iostream>
#include <vector>
#include <cstdio>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;
using std::begin;
using std::end;
using std::map;

struct sales_data {
    string isbn() const {
        return this->bookNo;
    }
    sales_data &combine(const sales_data &);
    double avg_price() const;

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
    sales_data data;

    string s = data.isbn();
    cout << s << endl;
    return EXIT_SUCCESS;
}