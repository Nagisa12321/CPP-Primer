#include "primer.h"
#include "quote.h"
#include "bulk_quote.h"
using namespace std;

int main() {
    quote q1;
    bulk_quote q2;
    quote q3(q2);
    quote *qq4 = &q2;
    quote &rq5 = q2;

    q1.net_price(0);
    q2.net_price(0);
    q3.net_price(0);
    qq4->net_price(0);
    rq5.net_price(0);
    return 0;
}