#include "primer.h"
#include "quote.h"
#include "bulk_quote.h"
#include "basket.h"
using namespace std;

int main() {
    quote q1("q1", 123);
    basket b;
    b.add_item(q1);
    b.add_item(quote("q2", 456));
    cout << b.total_receipt(cout) << endl;
    return 0;
}