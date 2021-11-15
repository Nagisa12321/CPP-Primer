#include "cycle.h"
using namespace std;

cycle::cycle(int x, int y, int radius)
    : x(x),
      y(y),
      radius(radius)
{
    
}

std::string cycle::define() const {
    string _res;
    _res += two_dimensional_graphics::define();
    _res += "cycle[" + to_string(x) + ", " + to_string(y) + ", " + to_string(radius) + "]";
    return _res;
}
