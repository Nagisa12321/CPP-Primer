#ifndef _MESSAGE_H_
#define _MESSAGE_H_
#include <set>
#include <string>

#include "folder.h"

class message {
    friend class folder;
    friend void swap(message &, message &);
public:
    explicit message(std::string);
    message(const message &);
    message(message &&);
    ~message();

    message &operator=(const message &);
    message &operator=(message &&);

    void save(folder &);
    void remove(folder &);

private:
    std::set<folder *> m_folders;
    std::string m_context;

    void add_all_folders();
    void remove_all_folders();
    void move_all_folders(message *);
};

void swap(message &, message &);

#endif // _MESSAGE_H_