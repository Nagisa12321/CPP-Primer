#include "primer.h"
using namespace std;

class singal {
public:
    static singal &get_instance();
    singal(const singal &) = delete;
private:
    singal() = default;
};

singal &singal::get_instance() { 
    static singal s;
    return s;
}

int main() {
    singal &s0 = singal::get_instance();
    singal &s1 = singal::get_instance();
    singal &s2 = singal::get_instance();

    cout << &s0 << endl;
    cout << &s1 << endl;
    cout << &s2 << endl;
    return 0;
}