#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

class NoDefault {
public:
    NoDefault(int val) { this->val = val; }

private:    
    int val;
};

int main() {    
    vector<NoDefault> vec(10);
    return EXIT_SUCCESS;
}