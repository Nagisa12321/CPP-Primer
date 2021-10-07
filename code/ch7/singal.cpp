#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

class singal {
public:
    static singal *get_singal() { 
        if (!s)
            s = new singal();
        return s;
    }

    void val(int i) { this->v = i; }
    int val() { return this->v; }
private:
    singal() = default;

    int v = 10;

    static singal *s;
};

singal *singal::s = nullptr;

int main() {
    singal *s1 = singal::get_singal();
    singal *s2 = singal::get_singal();

    cout << s1 << endl;
    cout << s2 << endl;
    s1->val(30);

    cout << s1->val() << endl;
    cout << s2->val() << endl;

    return EXIT_SUCCESS;
}