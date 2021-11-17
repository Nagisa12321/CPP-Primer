#include <algorithm>
#include "and_query.h"
using namespace std;

and_query::and_query(const query &q1, const query &q2)
    : binary_query(q1, q2, "&")
{
#ifdef EX_15_36
    cout << "and_query(const query &q1, const query &q2)" << endl;
#endif
}

query_result and_query::eval(text_query &tq) {
    shared_ptr<set<int>> res_lines(make_shared<set<int>>());
    query_result qr1 = m_query1.eval(tq);
    query_result qr2 = m_query2.eval(tq);
    set<int> lines2(qr2.cbegin(), qr2.cend());
    auto _if = [&](const int &i) { return lines2.count(i); };
    copy_if(qr1.cbegin(), qr1.cend(), inserter(*res_lines, res_lines->begin()), _if);
    return query_result(qr1.get_context(), res_lines);
}
