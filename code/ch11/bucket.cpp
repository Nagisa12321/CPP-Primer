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
    unordered_map<int, int> m;
    for (int i = 0; i < 100; i++) {
        size_t bucket_count = m.bucket_count();
        size_t max_bucket_count = m.max_bucket_count();

        cout << "bucket_count=" << bucket_count
             << ", max_bucket_count=" << max_bucket_count << endl;
            
        cout << m.load_factor() << endl;
        m[i] = i;   
    }


    return 0;
}