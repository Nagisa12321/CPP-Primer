#include <fstream>
#include <iostream>

#include "text_query.h"
#include "query_result.h"

using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 2) {
        cout << "Please run './a.out [filename]'" << endl;
        return -1; 
    }

    string filename(argv[1]);
    ifstream fis(filename);

    run_queries(fis);

    return 0;
}