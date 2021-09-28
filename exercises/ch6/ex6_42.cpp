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

string make_plural(size_t ctr, const string &word,
                   const string &ending = "s") {
    return (ctr > 1) ? word + ending : word;
}

int main() {
    cout << make_plural(1, "word") << endl;
    cout << make_plural(2, "word") << endl;
    return EXIT_SUCCESS;
}