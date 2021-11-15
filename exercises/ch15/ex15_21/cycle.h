#ifndef CYCLE_H
#define CYCLE_H
#include "two_dimensional_graphics.h"

class two_dimensional_graphics;
class cycle : public two_dimensional_graphics {
public:
    cycle(int x, int y, int radius);

protected:
    std::string define() const;

private:
    int x, y, radius;
};

#endif // CYCLE_H
