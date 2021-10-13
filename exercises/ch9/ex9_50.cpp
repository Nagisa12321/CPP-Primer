#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

int main() {
    vector<string> i_str_vec = {"1", "2", "3", "4", "5"};
    int i_sum = 0;
    for (const string &s : i_str_vec)
        i_sum += stoi(s);
    cout << i_sum << endl;

    vector<string> f_str_vec = {"1.55", "2.478", "-3", ".4", "-5"};
    double d_sum = 0;
    for (const string &s : f_str_vec)
        d_sum += stod(s);
    cout << d_sum << endl;

    return 0;
}