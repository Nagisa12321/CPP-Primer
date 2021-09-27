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
using std::initializer_list;

int addAll(initializer_list<int> list) {
    int sum = 0;
    for (int num : list)
        sum += num;
    
    return sum;
}

int main() {
    int sum = addAll({10, 20, 30, 40});
    cout << sum << endl;

    initializer_list<string> list;

    return 0;
}