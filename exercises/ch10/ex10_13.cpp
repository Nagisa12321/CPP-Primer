// io
#include <iostream>
#include <cstdio>

// containers
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <vector>
#include <forward_list>

// algorithm
#include <algorithm>
#include <numeric>

using namespace std;

bool lower_than_5(const string &s) {
    return s.size() <= 5;
}

int main() {
    vector<string> svec;
    string buf;
    while (cin >> buf) 
        svec.push_back(buf);

    cout << "\n============== before partition: ==============\n" << endl;
    for (const string &s : svec)
        cout << s << " ";
    cout << endl;

    auto it = partition(svec.begin(), svec.end(), lower_than_5);
    cout << "\n============== after partition: ==============\n" << endl;
    for (const string &s : svec)
        cout << s << " ";
    cout << endl;

    cout << "\nlarge than 5: \n" << endl;
    while (it != svec.end()) 
        cout << *it++ << " ";
    cout << endl;
    
    return 0;
}