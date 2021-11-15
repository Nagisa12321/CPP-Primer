#ifndef GRAPHICS_H
#define GRAPHICS_H
#include <iostream>

class graphics {
    friend std::ostream &operator<<(std::ostream &os, const graphics &g);

protected:
    virtual std::string define() const = 0;
};

std::ostream &operator<<(std::ostream &os, const graphics &g);

#endif // GRAPHICS_H
