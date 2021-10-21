// io
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstdio>

// containers
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <vector>
#include <forward_list>

// algorithm
#include <algorithm>
#include <iterator>
#include <numeric>

// memory
#include <memory>

using namespace std;

class StrBlob {
public:
    typedef vector<string>::size_type size_type;

    StrBlob();
    StrBlob(initializer_list<string> il);

    size_type size() const {
        return data->size();
    }
    bool empty() const {
        return data->empty();
    }
    void push_back(const string &s) {
        data->push_back(s);
    }
    void pop_back();
    string &front();
    string &back();

private:
    shared_ptr<vector<string>> data;
    void check(size_type i, const string &msg) const;
};

StrBlob::StrBlob() :
    data(make_shared<vector<string>>()) {
}
StrBlob::StrBlob(initializer_list<string> il) :
    data(make_shared<vector<string>>(il)) {
}

void StrBlob::pop_back() {
    this->data->pop_back();
}

string &StrBlob::front() {
    return data->front();
}

string &StrBlob::back() {
    return data->back();
}

void StrBlob::check(size_type i, const string &msg) const {
    if (i >= size())
        throw out_of_range(msg);
}

int main() {
    StrBlob b1;
    {
        StrBlob b2{"a", "an", "the"};
        b1 = b2;    // share the vector

        b2.push_back("test_insert");
    }
    
    while (!b1.empty()) {
        cout << b1.back() << endl;
        b1.pop_back();
    }
}