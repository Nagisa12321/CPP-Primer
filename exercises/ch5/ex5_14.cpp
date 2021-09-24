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
using std::map;


int main() {
    map<string, int> m;
    string cur;
    while (cin >> cur) 
        m[cur]++;

    int max = -1;
    string max_str; 
    for (auto it = m.cbegin(); it != m.cend(); ++it) {
        if (it->second > max) {
            max = it->second;
            max_str = it->first;
        }
    }        
    if (max == -1) {
        cout << "do not have any string!" << endl;
    } else {
        cout << max_str << " appeared " << max << " times." << endl;
    }
}