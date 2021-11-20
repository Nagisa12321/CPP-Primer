#include "primer.h"
using namespace std;

template <typename elemType> class ListItem;
template <typename elemType> class List {
public:
    List();
    List(const List &);
    List &operator=(const List &);
    ~List();

    void insert(ListItem<elemType> *ptr, elemType value);
private:
    ListItem<elemType> *front, *end;
};

int main() {
    
    return 0;
}