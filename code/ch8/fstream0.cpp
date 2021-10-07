#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>
#include <fstream>

using namespace std;

int main() {
    fstream fs;
    fs.open("./test.txt");
    fs << "hello world" << endl;
    fs.close(); 
    return EXIT_SUCCESS;
}