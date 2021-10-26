#ifndef _QUERY_RESULT_H_
#define _QUERY_RESULT_H_

#include <fstream>
#include <iostream>
#include <vector>
#include <set>
#include <memory>

#include "str_blob.h"

class query_result {
public:
    query_result(str_blob, std::shared_ptr<std::set<int>>);
    std::ostream &print(std::ostream &);

private:
    str_blob context;
    std::shared_ptr<std::set<int>> lines;
};

void run_queries(std::ifstream &);
std::ostream &print(std::ostream &, query_result);

#endif // _QUERY_RESULT_H_