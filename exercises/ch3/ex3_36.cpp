#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::begin;
using std::end;

constexpr unsigned arr_len = 10;

bool arr_equals(int (&arr1)[], int (&arr2)[]) {
    for (unsigned i = 0; i < arr_len; i++) {
        if (arr1[i] != arr2[i])
            return false;
    }
    return true;
}

bool vec_equals(vector<int> &vec1, vector<int> &vec2) {
    return vec1 == vec2;
}

int main() {
    return 0;
}