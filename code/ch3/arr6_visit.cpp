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
    unsigned scores[11] = {};
    unsigned grade;

    while (cin >> grade) {
        if (grade <= 100)
            scores[grade / 10]++;
    }

    for (auto i : scores)
        cout << i << " ";
    cout << endl;

    // cout << scores[-1] << endl;
}