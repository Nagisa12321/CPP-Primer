#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

void print_vector_int(vector<int> v) {
    for (vector<int>::const_iterator cit = v.cbegin();
         cit != v.cend(); cit++)
        cout << *cit << " ";
    cout << endl;
}

void print_vector_str(vector<string> v) {
    for (vector<string>::const_iterator cit = v.cbegin();
         cit != v.cend(); cit++)
        cout << *cit << " ";
    cout << endl;
}

int main() {
    vector<int> v1;              // nothing
    vector<int> v2(10);          // 10 0
    vector<int> v3(10, 42);      // 10 42
    vector<int> v4{10};          // 1 10
    vector<int> v5{10, 42};      // 2: 10, 42
    vector<string> v6{10};       // 10 ""
    vector<string> v7{10, "hi"}; // 10 "hi"

    print_vector_int(v1);
    print_vector_int(v2);
    print_vector_int(v3);
    print_vector_int(v4);
    print_vector_int(v5);
    print_vector_str(v6);
    print_vector_str(v7);
}