#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    string s = "some string";

    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
        *it = toupper(*it);
    
    // auto it = s.begin();
    // while (it != s.end() && !isspace(*it)) {
    //     *it = toupper(*it++);
    // }

    cout << s << endl;
}
