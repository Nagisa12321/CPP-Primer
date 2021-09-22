#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<string> v;

    vector<string>::iterator iter;
    // (a)
    // return the old value
    // and move the iterator
    *iter++;

    // (b)
    // the string can't exec '++' 
    // (*iter)++;

    // (c)
    // the iterator not have the member 'empty'
    // *iter.empty();

    // (d)
    // return the string is (not) empty
    iter->empty();

    // (e)
    // the string can not ++
    // ++*iter;

    // (f)
    // return the iter's string is or not empty
    // and move the iterator
    iter++->empty();
}
