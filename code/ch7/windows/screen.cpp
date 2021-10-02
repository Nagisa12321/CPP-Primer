#include "windows.h"

using namespace std;

inline screen &screen::move(pos r, pos c) {
    pos row = r * width;
    this->cursor = row + c;
    return *this;
}

char screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents[row + c];
}

inline screen &screen::set(char ch) {
    contents[cursor] = ch;
    return *this;
}

inline screen &screen::set(pos row, pos col, char ch) {
    contents[row * width + col] = ch;
    return *this;
}

inline void screen::do_display(ostream &out) const {
    out << "The screen is like this: " << endl;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            out << contents[i * width + j] << ' ';
        }
        out << endl;
    }
}

inline screen::pos screen::size() const {
    return width * height;
}

int main() {
    
    return EXIT_SUCCESS;
}