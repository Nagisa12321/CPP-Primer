#include "binary_query.h"

binary_query::binary_query(const query &q1, const query &q2, std::string opt)
    : query_base(),
      m_query1(q1),
      m_query2(q2), 
      m_opt(opt)
{
    
}

std::string binary_query::rep() const {
    return "(" + m_query1.rep() + " " + m_opt + " " + m_query2.rep() + ")";
}
