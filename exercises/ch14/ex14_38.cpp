#include "primer.h"
using namespace std;

class check_word {
public:
    check_word(int len) :
        m_len(len) {}

    bool operator()(const string &word) {
        return word.size() == m_len;
    }
private:
    int m_len;
};

int main() {
    istream_iterator<string> iss(cin), i_end;
    vector<string> svec(iss, i_end);
    for (int i = 1; i <= 10; ++i) {
        cout << "\n > the word's len is " << i << "'s word count: "
             << count_if(svec.begin(), svec.end(), check_word(i))
             << endl
             << " > there is: ";
        auto _end = partition(svec.begin(), svec.end(), check_word(i));
        auto it = svec.begin();
        while (it != _end)
            cout << *it++ << " ";
        cout << endl;
    }
    return 0;
}