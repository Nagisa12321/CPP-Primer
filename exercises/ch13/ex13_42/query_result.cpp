
#include "query_result.h"

using namespace std;

query_result::query_result(shared_ptr<str_vector> context,
                           shared_ptr<set<int>> lines) :
    context(context),
    lines(lines) {
}

ostream &query_result::print(ostream &os) {
    os << "element occours " << this->lines->size() << " times. " << endl;
    for (iterator it = begin(); it != end(); ++it) {
        os << "\t(line " << *it << ") "
           << (*context)[*it] << endl;
    }
    return os;
}

std::shared_ptr<str_vector> query_result::get_file() {
    return this->context;
}

query_result::iterator query_result::begin() {
    return this->lines->begin();
}

query_result::iterator query_result::end() {
    return this->lines->end();
}