#include <string>
using std::string;

int main() {
    string s5 = "hiya"; // copy init
    string s6("hiya");  // direct init
    string s7(10, 'c'); // direct init

    string s8 = string(10, 'c');
    /*
    string temp = string(10, 'c');
    string s8 = temp;
    */
}