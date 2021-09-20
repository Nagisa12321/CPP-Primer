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
    vector<unsigned> scores(11, 0);
    unsigned grade;
    vector<unsigned>::iterator it = scores.begin();
    while (cin >> grade) {
        *(it + grade / 10) += 1;
    }

    for (int i : scores)
        cout << i << " ";
    cout << endl;
}