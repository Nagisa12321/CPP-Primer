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

using namespace std;

int main() {
    map<string, int> m;
    
    using key_type = map<string, int>::key_type;
    string key_type_name = typeid(key_type).name();
    string value_type_name = typeid(decltype(m[0])).name();
    cout << "key type: " << key_type_name << endl;
    cout << "value type: " << value_type_name << endl;
    return 0;
}