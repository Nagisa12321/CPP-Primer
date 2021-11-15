#ifndef TWO_DIMENSIONAL_GRAPHICS_H
#define TWO_DIMENSIONAL_GRAPHICS_H
#include "graphics.h"

class graphics;
class two_dimensional_graphics : public graphics {
protected:
    std::string define() const = 0;
};

#endif // TWO_DIMENSIONAL_GRAPHICS_H
