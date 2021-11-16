#ifndef QUERY_RESULT_H
#define QUERY_RESULT_H
#include <iostream>
#include <memory>
#include <set>
#include <vector>

class query_result {
    friend std::ostream &operator<<(std::ostream &os, const query_result &qr);

public:
    query_result(std::shared_ptr<std::vector<std::string>> context, std::shared_ptr<std::set<int>> lines);

private:
    std::shared_ptr<std::vector<std::string>> m_context;
    std::shared_ptr<std::set<int>> m_lines;
};

std::ostream &operator<<(std::ostream &os, const query_result &qr);

#endif // QUERY_RESULT_H
