#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;
using std::hex;

int main() {
    unsigned char bits = 0x23;
    unsigned res = bits << 8;

    cout << hex << res << endl;
    cout << hex << ~res << endl;
}