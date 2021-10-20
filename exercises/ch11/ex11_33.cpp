// io
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstdio>

// containers
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <vector>
#include <forward_list>

// algorithm
#include <algorithm>
#include <iterator>
#include <numeric>

using namespace std;

int main() {
    ifstream fis("./rules.txt");
    map<string, string> rules;

    string key, value;
    while (fis >> key >> value) 
        rules[key] = value;

    fis.close();
    fis.clear();
    fis.open("./context.txt");

    string line;
    while (getline(fis, line)) {
        istringstream iss(line);
        string word;
        while (iss >> word) {
            if (rules.count(word))
                cout << rules[word] << " ";
            else 
                cout << word << " ";
        }
        cout << endl;
    }
    return 0;
}