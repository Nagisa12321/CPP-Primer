#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>
#include <fstream>

using namespace std;

int main() {
    ifstream fis("hello.txt", ios_base::openmode::_S_in);
    vector<string> vec;
    string buf;
    while (fis >> buf)
        vec.push_back(buf);

    for (string &s : vec)
        cout << s << endl;
    return EXIT_SUCCESS;
}