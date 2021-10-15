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
    stack<int> st;

    st.push(100);
    cout << st.top() << endl;
    cout << st.top() << endl;

    stack<int>::container_type container;
    return 0;
}