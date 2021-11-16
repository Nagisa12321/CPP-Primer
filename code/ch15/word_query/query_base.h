#ifndef QUERY_BASE_H
#define QUERY_BASE_H
#include <string>
#include "text_query.h"
#include "query_result.h"

class text_query;
class query_base {
public:
    virtual query_result eval(const text_query &tq) = 0;
    virtual std::string rep() = 0;
};

#endif // QUERY_BASE_H
