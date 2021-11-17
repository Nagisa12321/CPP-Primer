#include "query.h"
#include "word_query.h"
#include "no_query.h"
#include "and_query.h"
#include "or_query.h"

using namespace std;

query::query(std::string word)
    : m_p_qb(shared_ptr<query_base>(new word_query(word)))
{
    
}

query::query(std::shared_ptr<query_base> query)
    : m_p_qb(query)
{
    
}

query_result query::eval(text_query &tq) {
    return m_p_qb->eval(tq);
}

std::string query::rep() const {
    return m_p_qb->rep();
}

query operator~(const query &q) {
    return query(shared_ptr<query_base>(new no_query(q)));
}

query operator&(const query &q1, const query &q2) {
    return query(shared_ptr<query_base>(new and_query(q1, q2)));
}

query operator|(const query &q1, const query &q2) {
    return query(shared_ptr<query_base>(new or_query(q1, q2)));
}

std::ostream &operator<<(std::ostream &os, const query &q) {
    return os << q.rep();    
}
