#ifndef _TEXT_QUERY_H_
#define _TEXT_QUERY_H_

#include <vector>
#include <map>
#include <string>
#include <set>
#include <fstream>
#include <memory>

#include "query_result.h"

class text_query {
public:
    text_query(std::ifstream &);
    query_result query(const std::string &word);
private:
    std::shared_ptr<str_vector> context;
    std::map<std::string, std::shared_ptr<std::set<int>>> words;
};
#endif // _TEXT_QUERY_H_