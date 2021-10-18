// io
#include <iostream>
#include <cstdlib>
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

#include <iterator>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 4) {
        cout << "err input. " << endl;
        return -1;
    }

    string in_file = argv[1];
    string out_file0 = argv[2];
    string out_file1 = argv[3];

    ifstream fis(in_file);
    ofstream fos0(out_file0), fos1 = ofstream(out_file1);

    istream_iterator<int> int_it(fis), eof;
    ostream_iterator<int> int_it_0(fos0, "\n"), int_it_1(fos1, "\n");
    for_each(int_it, eof, [&](int i) {
        if (i % 2) int_it_0 = i;
        else int_it_1 = i;
    });
    return 0;
}