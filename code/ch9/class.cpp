#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

class test_class {

public: 
    test_class(int val) : val(val) {}
    test_class(const test_class &tc) { cout << "init!" << endl; }
private:
    int val;
};

int main() {
    test_class a(20);

    vector<test_class> vec;
    vec.push_back(test_class(10));
    vec.emplace_back(10);
    return 0;
}