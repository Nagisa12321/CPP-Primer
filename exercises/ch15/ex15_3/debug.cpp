#include "primer.h"
#include "quote.h"
#include "bulk_quote.h"
#include "another_quote.h"

using namespace std;

#ifdef NDEBUG
void debug(quote *q) {
    q->debug();
}
#endif 

int main() {
    quote q1("isbn1", 10.00);
    bulk_quote q2("isbn2", 20.00, 10, 0.2);
    another_quote q3("isbn3", 30.00, 0.99, 10);

#ifdef NDEBUG
    debug(&q1);
    debug(&q2);
    debug(&q3);
#endif 
    return 0;
}