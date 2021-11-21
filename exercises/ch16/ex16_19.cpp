#include "primer.h"
using namespace std;

template <typename Container>
void show(const Container &c) {
    cout << "[";
    for (typename Container::size_type i = 0; i < c.size(); ++i) {
        cout << c[i];
        if (i != c.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    vector<int> ivec;
    for (int i = 0; i < 30; ++i)
        ivec.push_back(rand() % 30);
    show(ivec); 
    return 0;
}   