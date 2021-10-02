#ifndef _WINDOWS_MGR_H
#define _WINDOWS_MGR_H

class screen;
class windows_mgr {
public:
    using screen_index = std::vector<screen>::size_type;
    windows_mgr();

public:
    // clear the screen that it's screen idx is ...
    void clear(screen_index);

    screen_index add_screen(screen &);

private:
    std::vector<screen> screens;
};
 
#endif