#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

class screen;

class windows_mgr {
public:
    using screen_index = std::vector<screen>::size_type;

    // clear the screen that it's screen idx is ... 
    void clear(screen_index);
    windows_mgr();

private:
    std::vector<screen> screens;
};

class screen {
    friend void windows_mgr::clear(screen_index);
public:
    typedef std::string::size_type pos;

    screen() = default;
    screen(pos ht, pos wd, char c) :
        height(ht), width(wd), contents(ht * wd, c) {
    }

public:
    screen &set(char);
    screen &set(pos, pos, char);

    char get() const {
        return contents[cursor];
    }

    inline char get(pos ht, pos wd) const;

    screen &move(pos r, pos c);
    const screen &display(std::ostream &out) const {
#ifndef NDEBUG
        std::cout << "const screen &display() const;" << std::endl;
#endif
        do_display(out);
        return *this;
    }
    screen &display(std::ostream &out) {
#ifndef NDEBUG
    std::cout << "screen &display();" << std::endl;
#endif
        do_display(out);
        return *this;
    }

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;

private:
    void do_display(std::ostream &out) const;
};

windows_mgr::windows_mgr() {
    screens.push_back(screen(24, 82, ' '));
}


void windows_mgr::clear(screen_index index) {
    screen &s = screens[index];
    s.contents = string(s.height * s.width, ' ');
}

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

int main() {
    
    return EXIT_SUCCESS;
}