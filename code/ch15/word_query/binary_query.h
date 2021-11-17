#ifndef BINARY_QUERY_H
#define BINARY_QUERY_H
#include "query_base.h"
#include "query.h"

class query_base;
class query;
class binary_query : public query_base {
    
protected:
    binary_query(const query &q1, const query &q2, std::string m_opt);

    query m_query1, m_query2;

private:
    std::string rep() const override;
    std::string m_opt;
};

#endif // BINARY_QUERY_H
