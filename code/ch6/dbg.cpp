#include <iostream>
#include <vector>
#include <cstdio>
#include <map>
#include <cassert>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::vector;
using std::string;
using std::rand;
using std::begin;
using std::end;
using std::map;

int func() {
#ifndef NDEBUG
    cerr << "Error: " << __FILE__ 
         << ": in function " << __func__
         << " at line " << __LINE__ << endl
         << "       Compiled on " << __DATE__   
         << " at " << __TIME__ << endl;
#endif
    return -1;
}

int main() {
    func();
    return EXIT_SUCCESS;
}