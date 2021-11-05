#include "primer.h"
using namespace std;

int _add(int i, int j) { return i + j; }
int _sub(int i, int j) { return i - j; }
int _mul(int i, int j) { return i * j; }
int _div(int i, int j) { return i / j; }

int main() {
    map<string, int(*)(int, int)> func_map;
    func_map["+"] = _add;
    func_map["-"] = _sub;
    func_map["*"] = _mul;
    func_map["/"] = _div;

    cout << "test start: " << endl;
    cout << "55 / 50 = " << func_map["/"](55, 50) << endl;
    return 0;
}