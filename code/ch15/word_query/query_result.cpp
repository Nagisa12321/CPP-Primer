#include "query_result.h"

using namespace std;

query_result::query_result(shared_ptr<vector<string>> context, shared_ptr<set<int>> lines) 
    : m_context(context),
      m_lines(lines) 
{

}

std::shared_ptr<std::vector<std::string>> query_result::get_context() {
    return m_context;
}

std::shared_ptr<std::set<int>> query_result::get_lines() {
    return m_lines;
}

std::ostream &operator<<(std::ostream &os, const query_result &qr) {
    os << "element occours " << qr.m_lines->size() << " times. " << endl;
    for (int line : *qr.m_lines) {
        os << "\t(line " << line << ") "
           << (*qr.m_context)[line] << endl;
    }
    return os;
}