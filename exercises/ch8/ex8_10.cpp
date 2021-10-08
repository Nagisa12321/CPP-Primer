#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>
#include <fstream>
#include <sstream>

using namespace std;


int main(int argc, char const *argv[]) {    
    const char *file_name = argv[1];
    ifstream fis(file_name, ios_base::openmode::_S_in);
    vector<string> vec;
    string line;
    while (getline(fis, line)) 
        vec.push_back(line);

    istringstream iss;
    for (const string &s : vec) {
        iss.str(s);

        string word; 
        while (iss >> word)
            cout << word << endl;

        iss.clear();
    }
    return 0;
}