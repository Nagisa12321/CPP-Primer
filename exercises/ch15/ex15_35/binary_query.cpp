#include "binary_query.h"
using namespace std;

binary_query::binary_query(const query &q1, const query &q2, std::string opt)
    : query_base(),
      m_query1(q1),
      m_query2(q2), 
      m_opt(opt)
{
#ifdef EX_15_36
    cout << "binary_query(const query &q1, const query &q2, std::string opt)" << endl;
#endif
}

std::string binary_query::rep() const {
#ifdef EX_15_36
    cout << "std::string binary_query::rep()" << endl;
#endif
    return "(" + m_query1.rep() + " " + m_opt + " " + m_query2.rep() + ")";
}
