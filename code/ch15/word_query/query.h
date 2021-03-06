#ifndef QUERY_H
#define QUERY_H
#include "query_base.h"

class query {
    friend query operator~(const query &q);
    friend query operator&(const query &q1, const query &q2);
    friend query operator|(const query &q1, const query &q2);

public:
    query(std::string word);
    query_result eval(text_query &tq);
    std::string rep() const;

private:
    query(std::shared_ptr<query_base> query);
    std::shared_ptr<query_base> m_p_qb;
};

query operator~(const query &q);
query operator&(const query &q1, const query &q2);
query operator|(const query &q1, const query &q2);
std::ostream &operator<<(std::ostream &os, const query &q);

#endif // QUERY_H
