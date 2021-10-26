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

// memory
#include <memory>

using namespace std;

int main(int argc, char *argv[]) {
    string filename(argv[1]);
    ifstream fis(filename);

    vector<string> context;
    map<string, set<int>> words;

    string line;
    istringstream iss;
    while (getline(fis, line)) {
        int line_no = context.size();
        context.push_back(line);
        iss.str(line);
        string word;
        while (iss >> word) 
            words[word].insert(line_no);
        iss.clear();
    }

    while (1) {
        cout << "enter word to look for, or 'q' to quit: ";
        string word;
        if (!(cin >> word) || word == "q") 
            break;

        set<int> lines = words[word];
        
        cout << "element occours " << lines.size() << " times. " << endl;
        for (int line : lines) {
            cout << "\t(line " << line << ") "
            << context[line] << endl; 
        }
    }

    return 0;
}