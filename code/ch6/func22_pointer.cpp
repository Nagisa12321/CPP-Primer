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

bool lengthCompare(const string &s1, const string &s2) {
    return s1.size() > s2.size();
}
typedef bool func(const string &, const string &);
typedef bool (*funcp)(const string &, const string &);


func *get_function0() {
    return lengthCompare;
}

funcp get_function1() {
    return lengthCompare;
}

bool (*get_function2())(const string&, const string&) {
    return lengthCompare;
}

bool (&get_function3())(const string&, const string&) {
    return lengthCompare;
}
// bool (*)(const string&, const string&) get_func1() {

// }

int main() {
    string s1 = "hello";
    string s2 = "hi";
    cout << get_function0()(s1, s2) << endl;
    cout << get_function1()(s1, s2) << endl;
    cout << get_function2()(s1, s2) << endl;
    cout << get_function3()(s1, s2) << endl;
    return EXIT_SUCCESS;
}