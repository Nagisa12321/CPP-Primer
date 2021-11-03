#include "primer.h"
using namespace std;

class read_string {
public:
    read_string(istream &is) : in(is) {}
    
    string operator()() {
        string word;
        cin >> word;
        if (cin) return word;
        else return string();
    }
private:    
    istream &in;
};

int main() {
    vector<string> svec;
    read_string read(cin);
    while (cin)
         svec.push_back(read());

    cout << "\nnow show the string vec: " << endl; 
    for_each(svec.begin(), svec.end(), [](const string &s) { cout << s << endl; });
    return 0;
}