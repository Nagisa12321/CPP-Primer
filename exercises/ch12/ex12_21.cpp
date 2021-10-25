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

class StrBlob;

class ConstStrBlobPtr {
public:
    ConstStrBlobPtr() :
        curr(0) {
    }
    ConstStrBlobPtr(const StrBlob &, size_t);

    string &deref() const;
    ConstStrBlobPtr &incr();
    bool equals(const ConstStrBlobPtr &that) const;

private:
    shared_ptr<vector<string>> check(size_t, const string &) const;
    const weak_ptr<vector<string>> wptr;
    size_t curr;
};

class StrBlobPtr {
public:
    StrBlobPtr() :
        curr(0) {
    }
    StrBlobPtr(StrBlob &, size_t);

    string &deref() const;
    StrBlobPtr &incr();
    bool equals(const StrBlobPtr &that) const;

private:
    shared_ptr<vector<string>> check(size_t, const string &) const;
    weak_ptr<vector<string>> wptr;
    size_t curr;
};

class StrBlob {
    friend class StrBlobPtr;
    friend class ConstStrBlobPtr;

public:
    typedef vector<string>::size_type size_type;
    typedef StrBlobPtr iterator;
    typedef ConstStrBlobPtr const_iterator;

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

    iterator begin();
    iterator end();

    const_iterator cbegin() const;
    const_iterator cend() const;

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

shared_ptr<vector<string>> StrBlobPtr::check(size_t i, const string &msg) const {
    shared_ptr<vector<string>> _ret = wptr.lock();
    if (!_ret)
        throw runtime_error("unbound StrBlobPtr");
    else if (i >= _ret->size())
        throw out_of_range(msg);
    return _ret;
}

shared_ptr<vector<string>> ConstStrBlobPtr::check(size_t i, const string &msg) const {
    shared_ptr<vector<string>> _ret = wptr.lock();
    if (!_ret)
        throw runtime_error("unbound StrBlobPtr");
    else if (i >= _ret->size())
        throw out_of_range(msg);
    return _ret;
}

string &StrBlobPtr::deref() const {
    shared_ptr<vector<string>> data = check(curr, "deref");
    return (*data)[curr];
}

StrBlobPtr &StrBlobPtr::incr() {
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}

string &ConstStrBlobPtr::deref() const {
    shared_ptr<vector<string>> data = check(curr, "deref");
    return (*data)[curr];
}

ConstStrBlobPtr &ConstStrBlobPtr::incr() {
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}

bool StrBlobPtr::equals(const StrBlobPtr &that) const {
    return this->curr == that.curr;
}

bool ConstStrBlobPtr::equals(const ConstStrBlobPtr &that) const {
    return this->curr == that.curr;
}

StrBlobPtr::StrBlobPtr(StrBlob &a, size_t sz = 0) :
    wptr(a.data), curr(sz) {
}

ConstStrBlobPtr::ConstStrBlobPtr(const StrBlob &a, size_t sz = 0) :
    wptr(a.data), curr(sz) {
}

StrBlob::iterator StrBlob::begin() {
    return StrBlobPtr(*this);
}

StrBlob::iterator StrBlob::end() {
    return StrBlobPtr(*this, data->size());
}

StrBlob::const_iterator StrBlob::cbegin() const {
    return ConstStrBlobPtr(*this);
}

StrBlob::const_iterator StrBlob::cend() const {
    return ConstStrBlobPtr(*this, data->size());
}

int main() {
    const StrBlob blob{"a", "an", "the"};

    StrBlob::const_iterator iter = blob.cbegin();
    while (!iter.equals(blob.cend())) {
        cout << iter.deref() << endl;
        iter.incr();
    }

}