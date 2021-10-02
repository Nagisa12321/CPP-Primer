#include "windows.h"

using namespace std;

void windows_mgr::clear(screen_index index) {
    screen &s = screens[index];
    s.contents = string(s.height * s.width, ' ');
}

windows_mgr::windows_mgr() {
    this->screens.push_back(screen(24, 82, ' '));
}

windows_mgr::screen_index windows_mgr::add_screen(screen &s) {
    screens.push_back(s);
    return screens.size() - 1;
}