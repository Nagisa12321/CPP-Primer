#include "primer.h"
#include "quote.h"
#include "bulk_quote.h"
using namespace std;

double print_total(ostream &os, const quote &q, size_t n) {
    double ret = q.net_price(n);
    os << "ISBN: " << q.isbn()
       << "# sold: " << n << " total due: " << ret << endl;
    return ret;
}

int main() {
    quote q1;
    bulk_quote q2;

    print_total(cout, q1, 0);
    print_total(cout, q2, 0);
    return 0;
}