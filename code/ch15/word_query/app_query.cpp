#include "query.h"
using namespace std;

int main() {
    text_query tq("./story.txt");
    while (1) {
        cout << "enter word to look for, or 'q' to quit: ";
        string expr;
        if (!(cin >> expr) || expr == "q") 
            break;
        
        
    }

}