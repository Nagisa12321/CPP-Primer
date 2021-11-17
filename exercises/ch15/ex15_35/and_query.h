#ifndef AND_QUERY_H
#define AND_QUERY_H
#include "binary_query.h"
#include "query.h"

class query;
class binary_query;
class and_query : public binary_query {

    friend query operator&(const query &q1, const query &q2);
    
    and_query(const query &q1, const query &q2);
    query_result eval(text_query &tq) override;
};

#endif // AND_QUERY_H
