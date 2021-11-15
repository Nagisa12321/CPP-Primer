#ifndef THREE_DIMENSIONAL_GRAPHICS_H
#define THREE_DIMENSIONAL_GRAPHICS_H
#include "graphics.h"

class graphics;
class three_dimensional_graphics : public graphics {
protected:
    std::string define() const = 0;
};

#endif // THREE_DIMENSIONAL_GRAPHICS_H
