#include "primer.h"
using namespace std; 

int main() {
    map<string, function<int(int, int)>> func_map = {
        {"+", [](int i, int j) { return i + j; }},
        {"-", [](int i, int j) { return i - j; }},
        {"*", [](int i, int j) { return i * j; }},
        {"/", [](int i, int j) { return i / j; }},
        {"%", [](int i, int j) { return i % j; }},
    };
    vector<string> svec(3);
    while (1) {
        cout << "Please input your ....: ";
        string in;
        getline(cin, in);
        istringstream iss(in);
        int idx = 0;
        string s;
        while (iss >> s) {
            svec[idx++] = s;
        }

        if(!func_map.count(svec[1])) {
            cout << "Sorry we don't have " << svec[1] << endl;
        } else {
            cout << func_map[svec[1]](stoi(svec[0]), stoi(svec[2])) << endl;
        }
    }
    return 0;
}