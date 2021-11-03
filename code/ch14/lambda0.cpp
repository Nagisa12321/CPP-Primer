#include "primer.h"
using namespace std;

class string_shorter {
public:
    bool operator()(const string &s1, const string &s2) {
        return s1.size() < s2.size();
    }
};

int main() {
    istream_iterator<string> iss(cin), i_end;
    vector<string> svec(iss, i_end);
    // sort(svec.begin(), svec.end(), [](const string &s1, const string &s2) {
    //     return s1.size() < s2.size();
    // });
    sort(svec.begin(), svec.end(), string_shorter());
    cout << "after sort: " << endl;
    for (const string &s : svec)
        cout << s << " ";
    cout << endl;
    return 0;
}