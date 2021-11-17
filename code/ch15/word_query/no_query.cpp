#include <memory>
#include "no_query.h"

using namespace std;

no_query::no_query(const query &q)
    : query_base(),
      m_query(q)
{
    
}

query_result no_query::eval(text_query &tq) {
    query_result qr = m_query.eval(tq);
    shared_ptr<set<int>> lines = qr.get_lines();
    shared_ptr<vector<string>> context = qr.get_context();
    shared_ptr<set<int>> res_lines(make_shared<set<int>>());
    for (int i = 0; i < context->size(); ++i) {
        if (!lines->count(i))
            res_lines->insert(i);
    }
    return query_result(context, res_lines);
}

std::string no_query::rep() const {
    return "~(" + m_query.rep() + ")";
}
