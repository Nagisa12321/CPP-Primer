#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[]) {
    const string ifile = "test.txt";
    ifstream fis(ifile);
    ofstream fos;
    fos.open(ifile + ".copy");

    string buf;
    while (getline(fis, buf))
        fos << buf << endl;

    fis.close();
    fis.open("./test2.txt");
    while (getline(fis, buf))
        fos << buf << endl;
    return 0;
}
