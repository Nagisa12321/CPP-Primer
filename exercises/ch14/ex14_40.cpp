#include "primer.h"
using namespace std;

class check_smallest {
public:
    check_smallest(int val) : m_len(val) {}
    bool operator()(const string &s) { return s.size() < m_len; }
private:
    int m_len;
};

int main(int argc, char *argv[]) {
    istream_iterator<string> iss(cin), i_end;
    vector<string> svec(iss, i_end);

    int len = atoi(argv[1]);
    cout << "smaller than " << len << ": " << endl;
    auto _end = partition(svec.begin(), svec.end(), check_smallest(len));
    auto _it = svec.begin();
    while (_it != _end)
        cout << *_it++ << " ";
    cout << endl;

    return 0;
}