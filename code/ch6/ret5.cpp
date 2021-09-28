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

vector<string> process(int i) {
    if (i == 0)
        return {};
    else if (i == 1)
        return {"one"};
    else 
        return {"one", "two", "...."};
}

int main() {
    // ... 
}