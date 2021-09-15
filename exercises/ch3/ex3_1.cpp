#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    cout << "ex1_9:" << endl;
    int i = 50;
    int sum = 0;
    while (i <= 100)
        sum += i++;
    cout << "sum is " << sum << endl;

    cout << "ex1_10:" << endl;
    for (int i = 10; i >= 0; --i)
        cout << i << endl;

    cout << "ex1_11: " << endl;
    cout << "Plz input 2 number: (a < b)" << endl;
    int v1, v2;
    cin >> v1 >> v2;
    for (int i = v1 + 1; i < v2; i++)
        cout << i << endl;
}