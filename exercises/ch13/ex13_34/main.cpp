#include "../primer.h"
#include "folder.h"
#include "message.h"
using namespace std;

void show_folders(const vector<folder> &folders) {
    for (const folder &f : folders) {
        cout << f.m_folder_name << ":" << endl;
        for (message *m : f.m_messages) {
            cout << "    > \"" << m->m_context << "\"" << endl;
        }
    }
}

int main() {
    vector<folder> folders;
    folders.push_back(folder("f1"));
    folders.push_back(folder("f2"));
    message m1("hello");
    message m2("world");

    show_folders(folders);

    cout << " ---- " << endl;

    m1.save(&folders[0]);
    m2.save(&folders[1]);
    show_folders(folders);

    cout << " ---- " << endl;

    message m3(m1);
    show_folders(folders);

    cout << " ---- " << endl;

    m3.m_context = "hi";
    show_folders(folders);

    cout << " ---- " << endl;
    
    m3 = m2;
    show_folders(folders);

    cout << " ---- " << endl;
    return 0;
}