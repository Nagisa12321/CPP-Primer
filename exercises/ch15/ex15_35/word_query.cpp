#include "word_query.h"
using namespace std;
word_query::word_query(const std::string &word)
    : query_base(),
      m_query_word(word)
{
#ifdef EX_15_36
    cout << "word_query(const std::string &word)" << endl;
#endif
}

query_result word_query::eval(text_query &tq) {
    return tq.query(m_query_word);
}

std::string word_query::rep() const {
#ifdef EX_15_36
    cout << "std::string word_query::rep()" << endl;
#endif
    return m_query_word;
}
