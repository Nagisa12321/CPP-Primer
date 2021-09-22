#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    int grade = 59;

    string final_grade = (grade < 60) ? "fail" 
                                      : "pass";
    string final_grade2 = (grade >= 90) ? "high pass"
                                        : (grade < 60) ? "fail" 
                                                       : "pass";

    cout << (grade < 60) ? "fail" : "pass";
    cout << endl;
    cout << ((grade < 60) ? "fail" : "pass") << endl;
}