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

int calculate(string expr) {
    stack<char> opt_stack;
    stack<int> num_stack;
    for (char c : expr) {
        if (c == ')') {
            int second = num_stack.top(); 
            num_stack.pop();

            int first = num_stack.top();
            num_stack.pop();

            char opt = opt_stack.top();
            opt_stack.pop();

            if (opt == '+') {
                num_stack.push(first + second);
            } else if (opt == '-') {
                num_stack.push(first - second);
            } else if (opt == '*') {
                num_stack.push(first * second);
            } else if (opt == '/') {
                num_stack.push(first / second);
            }
        } else if (c >= '0' && c <= '9') {
            num_stack.push(c - '0');
        } else {
            opt_stack.push(c);
        }
    }

    return num_stack.top();
}

int main() {
    int res = calculate("((1+2)*3)");
    cout << res << endl;
    return 0;
}