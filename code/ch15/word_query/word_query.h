#ifndef WORD_QUERY_H
#define WORD_QUERY_H
#include "query_base.h"
#include "query.h"

class query_base;
class query;
class word_query : public query_base {
    friend class query;
    word_query(const std::string &word);
    query_result eval(text_query &tq) override;
    std::string rep() const override;

    std::string m_query_word;
};

#endif // WORD_QUERY_H
