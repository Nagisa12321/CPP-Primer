#include <algorithm>
#include "or_query.h"

using namespace std;

or_query::or_query(const query &q1, const query &q2)
    : binary_query(q1, q2, "|")
{
#ifdef EX_15_36
    cout << "or_query(const query &q1, const query &q2)" << endl;
#endif
}

query_result or_query::eval(text_query &tq) {
    shared_ptr<set<int>> res_lines(make_shared<set<int>>());
    query_result qr1 = m_query1.eval(tq);
    query_result qr2 = m_query2.eval(tq);
    auto add = [&](const int &i) { res_lines->insert(i); };
    for_each(qr1.cbegin(), qr1.cend(), add);
    for_each(qr2.cbegin(), qr2.cend(), add);
    return query_result(qr1.get_context(), res_lines);
}
