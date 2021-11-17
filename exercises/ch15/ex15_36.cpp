#include "primer.h"
#include "ex15_35/query.h"
using namespace std;

int main() {
    cout << "\n----- test1 start: --------" << endl;
    query q = query("fiery") & query("bird") | query("wind");

    cout << "\n----- test2 start: --------" << endl;
    cout << q << endl;
    return 0;
}