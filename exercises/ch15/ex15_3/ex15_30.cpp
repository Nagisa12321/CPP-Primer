#include <vector>
#include <memory>
#include "quote.h"
#include "bulk_quote.h"
#include "basket.h"
using namespace std;

int main() {
    vector<quote> q_vec0;
    vector<shared_ptr<quote>> q_vec1;
    basket basket;
    for (int i = 0; i < 10; ++i) {
        q_vec0.push_back(bulk_quote("0-201-82470-1", 50, 10, .25));    
        q_vec1.push_back(make_shared<bulk_quote>("0-201-82470-1", 50, 10, .25));  
        basket.add_item(bulk_quote("0-201-82470-1", 50, 10, .25));
    }

    double net_price0 = .0, net_price1 = .0;
    for (const quote &q : q_vec0)
        net_price0 += q.net_price(1);
        
    for (shared_ptr<quote> pq : q_vec1)
        net_price1 += pq->net_price(1); 

    cout << "price0 = " << net_price0 << endl
         << "price1 = " << net_price1 << endl;

    cout << basket.total_receipt(cout) << endl;
}