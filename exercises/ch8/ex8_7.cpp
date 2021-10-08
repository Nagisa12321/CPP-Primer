#include <iostream>
#include <vector>
#include <cstdio>
#include <fstream>
#include <map>

using namespace std;

struct sales_data;

sales_data add(const sales_data &, const sales_data &);
std::ostream &print(std::ostream &, const sales_data &);
std::istream &read(std::istream &, sales_data &);

struct sales_data {
    friend sales_data add(const sales_data &, const sales_data &);
    friend std::ostream &print(std::ostream &, const sales_data &);
    friend std::istream &read(std::istream &, sales_data &);

public:
    sales_data() = default;
    sales_data(const string &s) :
        bookNo(s) {
    }
    sales_data(const string &s, unsigned n, double p) :
        bookNo(s), unit_solds(n), revenue(p * n) {
    }

    sales_data(istream &in) { read(in, *this); }

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

istream &read(istream &in, sales_data &data) {
    decltype(data.bookNo) no;
    decltype(data.revenue) rev;
    decltype(data.unit_solds) solds;

    in >> no >> rev >> solds;
    data.bookNo = no;
    data.revenue = rev;
    data.unit_solds = solds;
    return in;
}

ostream &print(ostream &out, const sales_data &data) {
    out << data.bookNo << " " << data.revenue << " " << data.unit_solds;
    return out;
}

double sales_data::avg_price() const {
    return this->revenue;
}

sales_data &sales_data::combine(const sales_data &data) {
    this->unit_solds += data.unit_solds;
    this->revenue += data.revenue;
    return *this;
}

int main(int argc, char const *argv[]) {
    const char *out_file = argv[1];
    ifstream fis("./data.txt", ios_base::openmode::_S_in);
    sales_data data(fis);

    ofstream fos(out_file, ios_base::openmode::_S_out);
    print(fos, data) << endl;
    return 0;
}