#include <iostream>

#include "query_result.h"
#include "text_query.h"

using namespace std;

void run_queries(ifstream &fis) {
    text_query tq(fis);
    while (1) {
        cout << "enter word to look for, or 'q' to quit: ";
        string word;
        if (!(cin >> word) || word == "q") 
            break;
        print(cout, tq.query(word)) << endl;
    }
}

ostream &print(ostream &os, query_result qr) {
    return qr.print(os);
}