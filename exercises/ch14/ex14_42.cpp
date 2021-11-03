#include "primer.h"
using namespace std;

int main() {
    {
        cout << "test (a): " << endl;
        vector<int> ivec;
        for (int i = 0; i < 10; ++i) {
            ivec.push_back(rand() % 2000);
        }
        sort(ivec.begin(), ivec.end());
        cout << "ivec: ";
        for (int i : ivec) cout << i << " ";
        cout << endl;
        greater<int> _greater;
        int num = count_if(ivec.begin(), ivec.end(), 
                           bind(_greater, placeholders::_1, 1024));
        cout << "bigger than 1024: " << num << endl;
    }

    {
        cout << "\ntest (b): " << endl;
        not_equal_to<string> _not;
        vector<string> svec{"pooh", "pooh", "boooh", "pooh"};
        auto it = find_if(svec.begin(), svec.end(), bind(_not, "pooh", placeholders::_1)); 
        cout << *it << endl;
    }

    {
        cout << "\ntest (c): " << endl;
        vector<int> ivec;
        vector<int> _ivec;

        for (int i = 0; i < 10; ++i) {
            ivec.push_back(rand() % 2000);
        }
        for (int i : ivec) cout << i << " ";
        cout << endl;
        multiplies<int> _milti;
        transform(ivec.begin(), ivec.end(), inserter(_ivec, _ivec.begin()), bind(_milti, placeholders::_1, 2));
        for (int i : _ivec) cout << i << " ";
        cout << endl;
    }
    return 0;
}