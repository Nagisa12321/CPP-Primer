#include "../../primer.h"
#include "str_blob_ptr.h"
#include "str_blob.h"
using namespace std;

class ex14_32 {
public:
    ex14_32(str_blob_ptr *p) :
        m_p_sbp(p) {}

    str_blob_ptr *operator->() {
        return m_p_sbp;
    }
private:
    str_blob_ptr *m_p_sbp;
};

int main() {
    str_blob b{"a"};
    str_blob_ptr ptr(b);
    ex14_32 ex(&ptr);

    cout << ex->operator->()->c_str() << endl;
}