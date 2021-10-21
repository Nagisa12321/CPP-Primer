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

int main() {
    vector<shared_ptr<string>> v1;
    {
        vector<shared_ptr<string>> v2;
        string s1 = "a";
        string s2 = "an";
        string s3 = "the";

        v2.push_back(shared_ptr<string>(&s1));
        v2.push_back(shared_ptr<string>(&s2));
        v2.push_back(shared_ptr<string>(&s3));

        v1 = v2;
        for (shared_ptr<string> sp : v1)
            cout << *sp << " ";
        cout << endl;
    }
    string s1 = "aa";
    string s2 = "anaaa";
    string s3 = "theaa";
    for (shared_ptr<string> sp : v1)
        cout << sp << " ";
    cout << endl;
    return 0;
}