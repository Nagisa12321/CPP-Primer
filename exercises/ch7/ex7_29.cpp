#include <iostream>
#include <vector>
#include <cstdio>
#include <map>

using std::cin;
using std::cout;
using std::ostream;
using std::endl;
using std::vector;
using std::string;
using std::rand;
using std::begin;
using std::end;
using std::map;

class screen {
public:
    typedef string::size_type pos;

    screen() = default;
    screen(pos ht, pos wd, char c) :
        height(ht), width(wd), contents(ht * wd, c) {
    }

public:
    screen set(char);
    screen set(pos, pos, char);

    char get() const {
        return contents[cursor];
    }

    inline char get(pos ht, pos wd) const;

    screen move(pos r, pos c);
    const screen &display(ostream &out) const {
#ifndef NDEBUG
        cout << "const screen &display() const;" << endl;
#endif
        do_display(out);
        return *this;
    }
    screen display(ostream &out) {
#ifndef NDEBUG
    cout << "screen &display();" << endl;
#endif
        do_display(out);
        return *this;
    }

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;

private:
    void do_display(ostream &out) const;
};


inline screen screen::move(pos r, pos c) {
    pos row = r * width;
    this->cursor = row + c;
    return *this;
}

char screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents[row + c];
}

inline screen screen::set(char ch) {
    contents[cursor] = ch;
    return *this;
}

inline screen screen::set(pos row, pos col, char ch) {
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

int main() {
    screen my_screen(5, 5, 'X');
    my_screen.move(4, 0).set('#').display(cout);
    my_screen.display(cout);
    return EXIT_SUCCESS;
}