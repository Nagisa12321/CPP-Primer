#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    string nums[] = {"one", "two", "three"};
    string *p1 = &nums[0];
    string *p2 = nums;

    cout << "p1: " << (void *)p1 << endl;
    cout << "p2: " << (void *)p2 << endl;
}