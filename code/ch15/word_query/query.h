#ifndef QUERY_H
#define QUERY_H
#include "query_base.h"

class query {
    friend query &operator~(const query &q);
    friend query &operator&(const query &q1, const query &q2);
    friend query &operator|(const query &q1, const query &q2);
public:
    query(std::string word);
    query_result eval(const text_query &tq);
    std::string rep();
private:
    query_base *m_p_qb;
};

query &operator~(const query &q);
query &operator&(const query &q1, const query &q2);
query &operator|(const query &q1, const query &q2);

#endif // QUERY_H
