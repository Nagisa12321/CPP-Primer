#ifndef TEXT_QUERY_H
#define TEXT_QUERY_H
#include <string>
#include <map>
#include <set>
#include <vector>
#include <memory>
#include "query_result.h"

class query_result;
class text_query {
public:
    text_query(std::string path);
    query_result query(const std::string &word);

private:
    std::shared_ptr<std::vector<std::string>> m_context;
    std::shared_ptr<std::map<std::string, std::shared_ptr<std::set<int>>>> m_words;
};

#endif // TEXT_QUERY_H
