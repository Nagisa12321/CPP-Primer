#include "blob_ptr.h"
#include "blob.h"
#include <iostream>
using namespace std;

int main() {
    blob<int> iblob{1, 2, 3, 4, 5};
    blob<int>::iterator cur = iblob.begin();
    while (cur != iblob.end())
        cout << *cur++ << endl;
    
    return 0;
}