#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

std::istream& func(std::istream &is)
{
    std::string buf;
    while (is >> buf)
        std::cout << buf << std::endl;
    is.clear();
    return is;
}

istream &read(istream &in) {
    string s;
    while (in >> s)
        cout << s << " ";
    cout << endl;

    in.clear();
    return in;
}

int main() {
    func(cin);
    return EXIT_SUCCESS;
}