#ifndef OR_QUERY_H
#define OR_QUERY_H
#include "binary_query.h"

class binary_query;
class or_query : public binary_query {
    friend query operator|(const query &q1, const query &q2);

    or_query(const query &q1, const query &q2);
    query_result eval(text_query &tq) override;
};

#endif // OR_QUERY_H
