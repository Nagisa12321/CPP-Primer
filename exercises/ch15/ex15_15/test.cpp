#include "primer.h"
#include "quote.h"
#include "bulk_quote.h"
#include "another_quote.h"
using namespace std;

int main() {
    quote q1("isbn1", 10.00);
    bulk_quote q2("isbn2", 10.00, 10, 0.2);
    another_quote q3("isbn3", 10.00, 10, 0.2);
    print_total(cout, q1, 100);
    print_total(cout, q2, 100);
    print_total(cout, q3, 100);

    disc_quote d;
    return 0;
}