#include "primer.h"
using namespace std;

class check_equals {
public:
    check_equals(int val) : target(val) {}
    bool operator()(const int &val) { return target == val; }

private:
    int target;
};

int main() {
    check_equals ce(10);
    vector<int> ivec;
    for (int i = 0; i < 1000; ++i) {
        ivec.push_back(rand() % 20);
    }
    sort(ivec.begin(), ivec.end());
    cout << "before delete: " << endl;
    for (int i = 0; i < 1000; ++i) {
        cout << ivec[i] << " ";
    }
    cout << endl;

    remove_if(ivec.begin(), ivec.end(), ce);
    cout << "\nafter delete: " << endl;
    for (int i = 0; i < ivec.size(); ++i) {
        cout << ivec[i] << " ";
    }
    cout << endl;
    return 0;
}