#include "primer.h"
using namespace std;

template <typename Container>
void show(Container &c) {
    typename Container::iterator cur = c.begin();
    while (cur != c.end()) {
        cout << *cur++ << " ";
    }
    cout << endl;
}

int main() {
    vector<int> ivec;
    for (int i = 0; i < 30; ++i)
        ivec.push_back(rand() % 30);
    show(ivec); 
    return 0;
}   