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
using std::begin;
using std::end;
using std::map;

int main(int argc, char const *argv[])
{
    if (argc != 3) {
        cout << "Please run \"./a.out [s1] [s2]\"" << endl;
        return -1;
    }

    string s1(argv[1]);
    string s2(argv[2]);

    string s3 = s1 + s2;

    cout << s3 << endl;
}
