#include "word_query.h"

word_query::word_query(const std::string &word)
    : query_base(),
      m_query_word(word)
{
    
}

query_result word_query::eval(text_query &tq) {
    return tq.query(m_query_word);
}

std::string word_query::rep() const {
    return m_query_word;
}
