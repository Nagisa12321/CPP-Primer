#ifndef _SCREEN_H
#define _SCREEN_H
#include <iostream>
#include <vector>
#include <cstdio>
#include <map>

#include "windows_mgr.h"

class screen {
    friend class windows_mgr;
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
    pos size() const;
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

#endif