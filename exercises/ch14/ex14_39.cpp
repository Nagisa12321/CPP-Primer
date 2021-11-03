#include "primer.h"
using namespace std;

class check_word {
public:
    check_word(int len) :
        m_len(len) {}

    bool operator()(const string &word) {
        return word.size() < m_len;
    }
private:
    int m_len;
};

int main() {
    istream_iterator<string> iss(cin), i_end;
    vector<string> svec(iss, i_end);
    auto _end = partition(svec.begin(), svec.end(), check_word(10));
    cout << "word size between 1-9: " << _end - svec.begin() << endl;
    cout << "word size bigger than 10: " << svec.end() - _end << endl;
    return 0;
}