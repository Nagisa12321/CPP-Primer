#include "str_blob.h"
#include "../../primer.h"
using namespace std;

int main() {
    cout << "test1: " << endl;
    str_blob b1{"a", "an"}, b2 = b1;
    b1.push_back("the");
    cout << b1.size() << endl;
    cout << b2.size() << endl;    

    cout << "\ntest2: " << endl;
    str_blob b3{"a", "b", "c", "d"};
    for (auto it = b3.begin(); it != b3.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "\ntest3: " << endl;
    cout << *(b3.end() - 2) << endl;
}