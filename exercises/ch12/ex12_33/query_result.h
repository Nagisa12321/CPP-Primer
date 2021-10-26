#ifndef _QUERY_RESULT_H_
#define _QUERY_RESULT_H_

#include <fstream>
#include <iostream>
#include <vector>
#include <set>
#include <memory>

class query_result {
public:
    typedef std::set<int>::iterator iterator;

    query_result(std::shared_ptr<std::vector<std::string>>, std::shared_ptr<std::set<int>>);

    std::ostream &print(std::ostream &);
    std::shared_ptr<std::vector<std::string>> get_file();
    iterator begin();
    iterator end();
private:
    std::shared_ptr<std::vector<std::string>> context;
    std::shared_ptr<std::set<int>> lines;
};

void run_queries(std::ifstream &);
std::ostream &print(std::ostream &, query_result);

#endif // _QUERY_RESULT_H_