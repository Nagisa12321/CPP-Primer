#ifndef _FOLDER_H_
#define _FOLDER_H_

#include "message.h"

class folder {
public:
    folder();

    void add_message(message *mess);
    void remove_message(message *mess);

private:
    std::set<message *> messages;
};

#endif // _FOLDER_H_