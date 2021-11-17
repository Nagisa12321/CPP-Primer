#include <algorithm>
#include "or_query.h"

using namespace std;

or_query::or_query(const query &q1, const query &q2)
    : binary_query(q1, q2, "|")
{
    
}

query_result or_query::eval(text_query &tq) {
    shared_ptr<set<int>> res_lines(make_shared<set<int>>());
    query_result qr1 = m_query1.eval(tq);
    query_result qr2 = m_query2.eval(tq);
    shared_ptr<set<int>> lines1 = qr1.get_lines();
    shared_ptr<set<int>> lines2 = qr2.get_lines();
    auto add = [&](const int &i) { res_lines->insert(i); };
    for_each(lines1->cbegin(), lines1->cend(), add);
    for_each(lines2->cbegin(), lines2->cend(), add);
    return query_result(qr1.get_context(), res_lines);
}
