#ifndef QUERY_RESULT_H
#define QUERY_RESULT_H
#include <iostream>
#include <memory>
#include <set>
#include <vector>

class query_result {
    friend std::ostream &operator<<(std::ostream &os, const query_result &qr);

public:
    typedef std::set<int>::const_iterator const_iterator;

    query_result(std::shared_ptr<std::vector<std::string>> context, std::shared_ptr<std::set<int>> lines);
    std::shared_ptr<std::vector<std::string>> get_context();
    const_iterator cbegin() const;
    const_iterator cend() const;

private:
    std::shared_ptr<std::vector<std::string>> m_context;
    std::shared_ptr<std::set<int>> m_lines;
};

std::ostream &operator<<(std::ostream &os, const query_result &qr);

#endif // QUERY_RESULT_H
