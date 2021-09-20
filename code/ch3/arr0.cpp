#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int *arr = new int[10];
    int arr2[10] = {0};
    cout << (void *)arr << endl;
    cout << (void *)arr2 << endl;

    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    cout << endl;

    for (int i = 0; i < 10; i++)
        cout << arr2[i] << " ";
    cout << endl;

    for (int i = 0; i < 10; i++)
        arr[i] = 1024;

    delete[] arr;

    int *arr3 = new int[10]();

    for (int i = 0; i < 10; i++)
        cout << arr3[i] << " ";
    cout << endl;
}