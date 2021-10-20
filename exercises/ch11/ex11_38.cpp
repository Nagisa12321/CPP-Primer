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
    unordered_map<string, string> rules; 

    ifstream fis("./rules.txt");
    string first, second;
    while (fis >> first >> second) 
        rules[first] = second;

    fis.close();
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