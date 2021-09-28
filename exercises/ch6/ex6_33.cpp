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

void print_vec(const vector<int> &vec, size_t idx) {
    if (idx == vec.size())
        return;

    cout << vec[idx] << endl;
    print_vec(vec, idx + 1);
}

void print_vec(const vector<int> &vec) {
    print_vec(vec, 0);
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print_vec(v);
    return EXIT_SUCCESS;
}