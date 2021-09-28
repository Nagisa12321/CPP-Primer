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

/**
 * The top const is not a new function
 */ 
void look_up(string) {}
// void look_up(const string) {}

// void look_up(string *) {}
// void look_up(string * const) {}

/**
 * The low const can define a new function
 */

void look_up(string &) {}
void look_up(const string &) {}

void look_up(string *) {}
void look_up(const string *) {}

int main() {
    
    return EXIT_SUCCESS;
}