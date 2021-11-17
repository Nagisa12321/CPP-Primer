#include "query.h"
#include "word_query.h"
#include "no_query.h"
#include "and_query.h"
#include "or_query.h"

using namespace std;

query::query(std::string word)
    : m_p_qb(new word_query(word)),
      m_count(new int(1))
{
#ifdef EX_15_36
    cout << "query::query(std::string word)" << endl;
#endif
}

query::query(query_base *query)
    : m_p_qb(query),
      m_count(new int(1))
{
#ifdef EX_15_36
    cout << "query::query(std::shared_ptr<query_base> query)" << endl;
#endif
}

query::query(const query &q) 
    : m_p_qb(q.m_p_qb),
      m_count(q.m_count)
{
    ++*m_count;
}

query::~query() {
    --*m_count;
    if (*m_count == 0) {
        delete m_count;
        delete m_p_qb;
    }
}

query &query::operator=(const query &q) {
    if (&q == this) return *this;
    this->~query();
    this->m_count = q.m_count;
    this->m_p_qb = q.m_p_qb;
    ++*m_count;
    return *this;
}

query_result query::eval(text_query &tq) {
    return m_p_qb->eval(tq);
}

std::string query::rep() const {
    return m_p_qb->rep();
}

query operator~(const query &q) {
    return query(new no_query(q));
}

query operator&(const query &q1, const query &q2) {
    return query(new and_query(q1, q2));
}

query operator|(const query &q1, const query &q2) {
    return query(new or_query(q1, q2));
}

std::ostream &operator<<(std::ostream &os, const query &q) {
    return os << q.rep();    
}
