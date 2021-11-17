#include "primer.h"
#include "ex15_35/query.h"
using namespace std;

int main() {
    query q = query("fiery") & query("bird") | query("wind");
    cout << q << endl;
    return 0;
}