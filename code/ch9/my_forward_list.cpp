#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

class list_node {
public:
    list_node(int val, list_node *next = nullptr) : val(val), next(next) {}

    int get_val() const { return val; }
    list_node *get_next() { return next; }
private:
    const int val;
    list_node *next;
};

class my_forward_list {
// ... 
// some iterator... 
};

int main() {
    
    return 0;
}