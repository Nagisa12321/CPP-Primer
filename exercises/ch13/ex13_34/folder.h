#ifndef _FOLDER_H_
#define _FOLDER_H_
#include <vector>

#include "message.h"

class message;

class folder {
    friend void show_folders(const std::vector<folder> &);
public:
    folder(std::string);

    void add_message(message *mess);
    void remove_message(message *mess);

private:
    std::string m_folder_name;
    std::set<message *> m_messages;
};

#endif // _FOLDER_H_