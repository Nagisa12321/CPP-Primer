#include "primer.h"
using namespace std;

class str_blob {
    friend int main();
public:
    str_blob() { data = make_shared<vector<string>>(); };
    str_blob(const str_blob &blob) {
        data = make_shared<vector<string>>(blob.data->begin(), blob.data->end());
    }
    str_blob &operator=(const str_blob &blob) {
        data = make_shared<vector<string>>(blob.data->begin(), blob.data->end());
        return *this;
    }

    // when destory a smart pointer, will free the vector<int> if the use_count is 0. 
    ~str_blob() = default;
private:
    shared_ptr<vector<string>> data; 
};

int main() {
    str_blob b0; 
    b0.data->push_back("a");
    str_blob b1(b0);
    b0.data->push_back("b");

    cout << b0.data->size() << endl;
    cout << b1.data->size() << endl;
    return 0;
}