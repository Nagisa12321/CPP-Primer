
#include "query_result.h"

using namespace std;

query_result::query_result(shared_ptr<vector<string>> context,
                           shared_ptr<set<int>> lines) :
    context(context),
    lines(lines) {
}


ostream &query_result::print(ostream &os) {
    os << "element occours " << this->lines->size() << " times. " << endl;
    for (int line : *lines) {
        os << "\t(line " << line << ") "
           << (*context)[line] << endl; 
    }
    return os;
}