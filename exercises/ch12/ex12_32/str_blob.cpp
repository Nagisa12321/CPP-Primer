#include "str_blob.h"

using namespace std;

str_blob::str_blob() :
    data(make_shared<vector<string>>()) {
}
str_blob::str_blob(initializer_list<string> il) :
    data(make_shared<vector<string>>(il)) {
}