#include "primer.h"
using namespace std;

int _add(int i, int j) { return i + j; }

class divide {
public:
    int operator()(int i, int j) {
        return i / j;
    }
};

int main() {  
    function<int(int, int)> func1(_add);
    function<int(int, int)> func2 = divide();
    function<int(int, int)> func3([](int i, int j) { return i * j; });

    cout << "test1: " << endl;
    cout << func1(4, 2) << endl;
    cout << func2(4, 2) << endl;
    cout << func3(4, 2) << endl;

    auto mod = [](int i, int j) { return i % j; };
    map<string, function<int(int, int)>> binops = {
        {"+", _add}, 
        {"-", std::minus<int>()},
        {"/", divide()},
        {"*", [](int i, int j) { return i * j; }},
        {"%", mod}
    };

    cout << "test2: " << endl;
    cout << binops["+"](10, 5) << endl;
    cout << binops["-"](10, 5) << endl;
    cout << binops["/"](10, 5) << endl;
    cout << binops["*"](10, 5) << endl;
    cout << binops["%"](10, 5) << endl;
    return 0;
}