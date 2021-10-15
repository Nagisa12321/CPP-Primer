#include <iostream>
#include <cstdio>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <vector>
#include <forward_list>
#include <stack>

using namespace std;

int main() {
    stack<int> intStack;

    for (size_t ix = 0; ix != 10; ++ix) 
        intStack.push(ix);
    
    while (!intStack.empty()) {
        int value = intStack.top();
        cout << value << endl;
        intStack.pop();
    }
    return 0;
}