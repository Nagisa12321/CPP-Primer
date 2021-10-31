#include "folder.h"

using namespace std;

folder::folder(string folder_name = "") :
    m_folder_name(folder_name) {
}

void folder::add_message(message *mess) {
    this->m_messages.insert(mess);
}

void folder::remove_message(message *mess) {
    this->m_messages.erase(mess);
}