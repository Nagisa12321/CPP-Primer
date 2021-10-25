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

struct destination {};
struct connection {};

connection connect(destination *dest) {
    connection conn;
    cout << "connection open." << endl;
    return conn;
}

void disconnect(connection conn) {
    cout << "connection closed." << endl;
}
 
void end_connection(connection *p) {
    disconnect(*p);
}

void f() {
    destination dest;
    connection c = connect(&dest);
    shared_ptr<connection> csp(&c, end_connection);
    throw runtime_error("hello");
}

int main() {
    try {
        f();
    } catch (runtime_error e) {
        cout << e.what() << endl;
    }
    return 0;
}