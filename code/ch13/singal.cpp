#include "primer.h"
using namespace std;

class singal {
public:
    static singal *get_initial();
private:
    singal() = default;
    ~singal() = default;
};

singal *singal::get_initial() {
    static singal *sin = new singal();
    return sin;
}

int main() {
    singal *sin1 = singal::get_initial();
    singal *sin2 = singal::get_initial();

    cout << sin1 << endl;
    cout << sin2 << endl;
    return 0;
}