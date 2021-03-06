#ifndef QUERY_BASE_H
#define QUERY_BASE_H
#include <string>
#include "text_query.h"
#include "query_result.h"

class text_query;
class query;
class query_base {
    friend class query;

protected:
    virtual ~query_base() = default;

private:
    virtual query_result eval(text_query &tq) = 0;
    virtual std::string rep() const = 0;
};

#endif // QUERY_BASE_H
