#include "graphics.h"

std::ostream &operator<<(std::ostream &os, const graphics &g) {
    os << g.define();
    return os;
}
