#include "message.h"

using namespace std;

message::message(string context = "") :
    m_context(context) {
}
message::message(const message &mess) :
    m_context(mess.m_context), m_folders(mess.m_folders) {
    add_all_folders();
}

message &message::operator=(const message &mess) {
    if (&mess == this)
        return;

    remove_all_folders();
    this->m_folders = set<folder *>(mess.m_folders);
    this->m_context = mess.m_context;
    add_all_folders();

    return *this;
}

message::~message() {
    remove_all_folders();
}

void message::save(folder &folder) {
    this->m_folders.insert(&folder);
    folder.add_message(this);
}

void message::remove(folder &folder) {
    this->m_folders.erase(&folder);
    folder.remove_message(this);
}

void message::add_all_folders() {
    for (folder *folder : m_folders)
        folder->add_message(this);
}

void message::remove_all_folders() {
    for (folder *folder : m_folders)
        folder->remove_message(this);
}

void swap(message &m1, message &m2) {
    m1.remove_all_folders();
    m2.remove_all_folders();
    swap(m1.m_context, m2.m_context);
    swap(m1.m_folders, m2.m_folders);
    m1.add_all_folders();
    m2.add_all_folders();
}
