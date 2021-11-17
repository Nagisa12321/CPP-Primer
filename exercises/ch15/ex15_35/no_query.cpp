#include <memory>
#include "no_query.h"

using namespace std;

no_query::no_query(const query &q)
    : query_base(),
      m_query(q)
{
#ifdef EX_15_36
    cout << "no_query(const query &q)" << endl;
#endif
}

query_result no_query::eval(text_query &tq) {
    query_result qr = m_query.eval(tq);
    set<int> lines(qr.cbegin(), qr.cend());
    shared_ptr<vector<string>> context = qr.get_context();
    shared_ptr<set<int>> res_lines(make_shared<set<int>>());
    for (int i = 0; i < context->size(); ++i) {
        if (!lines.count(i))
            res_lines->insert(i);
    }
    return query_result(context, res_lines);
}

std::string no_query::rep() const {
#ifdef EX_15_36
    cout << "std::string no_query::rep()" << endl;
#endif
    return "~(" + m_query.rep() + ")";
}
