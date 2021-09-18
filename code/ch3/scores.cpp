#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<int> scores(11, 0);
    int score;
    while (cin >> score) {
        scores[score / 10] += 1;
    }

    for (int i = 0; i < scores.size(); i++)
        cout << scores[i] << " ";

    cout << endl;
}