#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>
#include <fstream>

using namespace std;

int main() {
    ofstream fos("./test_app.txt", ios_base::openmode::_S_app);
    fos << "hello world!" << endl;
    return 0;
}