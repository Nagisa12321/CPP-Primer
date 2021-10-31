#ifndef _MESSAGE_H_
#define _MESSAGE_H_
#include <set>
#include <string>
#include <iostream>

#include "folder.h"

class folder;

class message {
    friend class folder;
    friend void swap(message &, message &);
    friend void show_folders(const std::vector<folder> &);
    friend int main();

public:
    explicit message(std::string);
    message(const message &);
    ~message();

    message &operator=(const message &);

    void save(folder &);
    void save(folder *);
    void remove(folder &);
    void remove(folder *);

private:
    std::set<folder *> m_folders;
    std::string m_context;

    void add_all_folders();
    void remove_all_folders();
};

void swap(message &, message &);
#endif // _MESSAGE_H_