#include <iostream>
#include <vector>
#include <cstdio>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;
using std::begin;
using std::end;
using std::map;

typedef string::size_type sz;

void screen(sz ht = 24, sz wid = 80, char background = '#') {
    cout << "ht = " << ht << endl;
    cout << "wid = " << wid << endl;
    cout << "background = " << background << endl;
}

int main() {
    screen();
    screen(20);
    screen(20, 80);
    screen(20, 80, '/');
    return EXIT_SUCCESS;
}