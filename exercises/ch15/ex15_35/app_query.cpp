#include <stack>
#include "query.h"
using namespace std;

int main() {
    text_query tq("./story.txt");
    while (1) {
        cout << "enter word to look for, or 'q' to quit: ";
        string expr;
        if (!getline(cin, expr) || expr == "q") 
            break;
        
        stack<query> query_stack;
        stack<char> option_stack;
        string word;
        int error = 0;
        for (char c : expr) {
            if (c == ' ') continue;
            else if (c == '(' || c == '&' || c == '|' || c == '~') {
                option_stack.push(c);
                if (c == '&' || c == '|') {
                    if (word.size()) {
                        query_stack.push(query(word));
                        word.clear();
                    }
                }
            } else if (c == ')') {
                if (option_stack.empty()) {
                    error = 1;
                    break;
                }
                char opt = option_stack.top();
                option_stack.pop();
                if (opt == '&' || opt == '|') {
                    query q1 = query_stack.top();
                    query_stack.pop();
                    query q2(word);
                    if (opt == '&') query_stack.push(q1 & q2);
                    else query_stack.push(q1 | q2);

                    word.clear();

                } else if (opt == '(') {
                    option_stack.push('(');
                } else if (opt == '~') {
                    query q1(word);
                    query_stack.push(~q1);
                    word.clear();

                } else {
                    error = 1;
                    break;
                }

                // pop the (
                if (option_stack.empty()) {
                    error = 1;
                    break;
                } else option_stack.pop();
            } else {
                word.push_back(c);
            }
        }
        if (word.size() != 0)
            query_stack.push(query(word));
        if (error || query_stack.size() != 1) {
            cout << "wrong format!" << endl;
            continue;
        } 
        if (option_stack.size() == 1 && option_stack.top() == '~') {
            query q = ~(query_stack.top());
            query_stack.pop();
            query_stack.push(q);
        } 
        if (option_stack.size() != 0 && query_stack.size() != 1) {
            cout << "wrong format!" << endl;
            continue;
        }

        cout << query_stack.top() << " " << query_stack.top().eval(tq) << endl;
    }

}

/*
➜  ex15_35 git:(master) ✗ ./a.out 
enter word to look for, or 'q' to quit: Daddy
Daddy element occours 3 times. 
	(line 1) Her Daddy says when the wind blows 
	(line 6) " Daddy , shush , there is no such thing , "
	(line 9) Shyly , she asks , " I mean , Daddy , is there ? "

enter word to look for, or 'q' to quit: ~(Alice)
~(Alice) element occours 9 times. 
	(line 1) Her Daddy says when the wind blows 
	(line 2) through her hair , it looks almost alive ,
	(line 3) like a fiery bird in the flight .
	(line 4) A beautiful fiery bird , he tells her ,
	(line 5) magical but untamed .
	(line 6) " Daddy , shush , there is no such thing , "
	(line 7) she tells him , at the same time wanting 
	(line 8) him to tell her more . 
	(line 9) Shyly , she asks , " I mean , Daddy , is there ? "

enter word to look for, or 'q' to quit: (hair | Alice)
(hair | Alice) element occours 2 times. 
	(line 0) Alice Emma has long flowing red hair .
	(line 2) through her hair , it looks almost alive ,

enter word to look for, or 'q' to quit: (hair & Alice)
(hair & Alice) element occours 1 times. 
	(line 0) Alice Emma has long flowing red hair .

enter word to look for, or 'q' to quit: ((fiery & bird) | wind)
((fiery & bird) | wind) element occours 3 times. 
	(line 1) Her Daddy says when the wind blows 
	(line 3) like a fiery bird in the flight .
	(line 4) A beautiful fiery bird , he tells her ,

enter word to look for, or 'q' to quit: 


*/