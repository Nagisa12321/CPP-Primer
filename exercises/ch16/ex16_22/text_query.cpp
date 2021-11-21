#include <sstream>

#include "text_query.h"
#include "debug_delete.h"

using namespace std;

text_query::text_query(ifstream &fis)
    : context(shared_ptr<vector<string>>(new vector<string>, debug_delete(cout)))
{
    string line;
    istringstream iss;
    while (getline(fis, line)) {
        int line_no = this->context->size();
        this->context->push_back(line);
        iss.str(line);
        string word;
        while (iss >> word) {
            if (!this->words.count(word))
                this->words[word] = make_shared<set<int>>();
            this->words[word]->insert(line_no);
        }
        iss.clear();
    }
}

query_result text_query::query(const string &word) {
    if (this->words.count(word))
        return query_result(this->context, this->words[word]);
    else 
        return query_result(this->context, make_shared<set<int>>());
}