#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <deque>
#include <forward_list>

using namespace std;

int main() {
    array<int, 10> arr;
    array<int, 10> arr1 = arr;
    cout << arr.empty() << endl;

    array<int, 5> arr2{1, 2, 3};
    for (int i : arr2)
        cout << i << " ";
    cout << endl;

    cout << " ------------ " << endl;

    vector<int> vec{1, 2, 3, 4, 5};
    vector<int> vec1(vec.begin(), vec.end());
    for (int i : vec1)
        cout << i << " ";
    cout << endl;

    vector<int> vec2(vec.rbegin(), vec.rend());
    for (int i : vec2)
        cout << i << " ";
    cout << endl;

    cout << " ------------ " << endl;

    list<string> authors = { "Milton", "Snakespeare", "Austen" };
    vector<const char *> articles = { "a", "an", "the" };

    list<string> articles_copy(authors);
    for (const string &name : articles_copy)
        cout << name << " ";
    cout << endl;

    // deque<string> authList(authors);
    // vector<string> authList(authors);

    forward_list<string> fl(articles.begin(), articles.end());
    for (const string &s : fl)
        cout << s << " ";
    cout << endl;

    list<const char *> l(articles.begin(), articles.end());
    for (const char *name : l)
        cout << name << " ";
    cout << endl;
    return 0;
}