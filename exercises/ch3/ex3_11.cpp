#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    const string s = "Keep going!";
    // c's type: const char &
    for (auto &c : s) {
        // .....
    }
}