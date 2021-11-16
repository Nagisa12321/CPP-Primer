#include "bulk_quote.h"
using namespace std;

int main() {
    bulk_quote bq1("a", 0.1, 123, 0.1);
    cout << "test start" << endl;
    bulk_quote bq2(bq1);
    cout << " ---- " << endl;

    return 0;
}