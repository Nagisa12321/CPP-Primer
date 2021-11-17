#ifndef NO_QUERY_H
#define NO_QUERY_H
#include "query_base.h"
#include "query.h"

class query_base;
class query;
class no_query : public query_base {
    friend query operator~(const query &q);

    no_query(const query &q);
    query_result eval(text_query &tq) override;
    std::string rep() const override;

    query m_query;
};

#endif // NO_QUERY_H
