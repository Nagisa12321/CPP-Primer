#include "primer.h"
using namespace std;

template <typename T, size_t size> 
constexpr size_t get_size(const T (&)[size]) {
    return size;
} 

int main() {
    int ia[10];
    cout << get_size(ia) << endl;
    cout << get_size("hello world") << endl;
    return 0;
}