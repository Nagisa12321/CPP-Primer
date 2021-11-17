#include <sstream>
#include <fstream>
#include <iostream>
#include "text_query.h"
using namespace std;

text_query::text_query(string path)
    : m_context(make_shared<vector<std::string>>()),
      m_words(make_shared<map<string, shared_ptr<set<int>>>>())
{
    ifstream fis(path);
    string line;
    istringstream iss;
    while (getline(fis, line)) {
        int line_no = m_context->size();
        this->m_context->push_back(line);
        iss.str(line);
        string word;
        while (iss >> word) {
            if (!m_words->count(word))
                (*m_words)[word] = make_shared<set<int>>();
            (*m_words)[word]->insert(line_no);
        }
        iss.clear();
    }
}

query_result text_query::query(const string &word) {
    if (m_words->count(word))
        return query_result(m_context, (*m_words)[word]);
    else 
        return query_result(m_context, make_shared<set<int>>());
}