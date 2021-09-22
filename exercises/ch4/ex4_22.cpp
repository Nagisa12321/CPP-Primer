#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

string make_grade_if(unsigned grade) {
    if (grade < 60)
        return "fail";
    if (grade <= 75)
        return "low pass";
    if (grade <= 90)
        return "pass";
    return "high pass";
}

string make_grade_condition(unsigned grade) {
    return grade < 60 ? "fail" : grade <= 75 ? "low pass" :
                             grade <= 90     ? "pass" :
                                               "high pass";
}

int main() {
    int grade;
    while (cin >> grade)
        cout << make_grade_condition(grade) << endl;
}