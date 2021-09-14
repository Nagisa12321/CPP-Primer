#include <iostream>

class Sales_data {
public:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main() {
    Sales_data d;
    std::cout << d.bookNo << std::endl;
    std::cout << d.units_sold << std::endl;
    std::cout << d.revenue << std::endl;
}