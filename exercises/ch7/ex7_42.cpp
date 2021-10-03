#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

class Tree {

public:
    // Tree() : val(0), left(0), right(0) {}
    // Tree(int v) : val(v), left(0), right(0) {}
    // Tree(int v, Tree *l, Tree *r) : val(v), left(l), right(r) {}
    Tree() : Tree(0) {}
    Tree(int v) : Tree(v, nullptr, nullptr) {}
    Tree(int v, Tree *l, Tree *r) 
        : val(v), left(l), right(r) {}

    Tree *leftChild() const { return this->left; }
    Tree *rightChild() const { return this->right; }
    int getVal() const { return this->val; }
private:
    Tree *left;
    Tree *right;
    int val;
};

void print_tree(Tree *node) {
    if (!node)
        return;
    cout << node->getVal() << endl;
    print_tree(node->leftChild());
    print_tree(node->rightChild());
}

int main() {
    Tree t3(3);
    Tree t4(4);
    Tree t6(6);
    Tree t2(2, &t3, &t4);
    Tree t5(5, nullptr, &t6);
    Tree t1(1, &t2, &t5);
    print_tree(&t1);
    return EXIT_SUCCESS;
}