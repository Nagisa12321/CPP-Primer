#include <iostream>
#include <vector>
#include <cstdio>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int main() {
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};

    int score;
    while (cin >> score) {
        string letter_grade
            = (score < 60) ? "F" : scores[(score - 50) / 10];

        cout << letter_grade << endl;
    }
}