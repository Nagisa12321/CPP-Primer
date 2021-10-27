#include "primer.h"
using namespace std;

class TreeNode {
public:
    TreeNode(string value, int count, TreeNode *left = 0, TreeNode *right = 0) :
        value(value), count(count), left(left), right(right) {
    }

    TreeNode(const TreeNode &node) :
        value(node.value), count(node.count) {
        if (node.left) left = new TreeNode(*node.left);
        if (node.right) right = new TreeNode(*node.right);
    }

    ~TreeNode() {
        cout << "delete [" << value << ", "
             << count << "]." << endl;
        if (left) delete left;
        if (right) delete right;
    }

    TreeNode &operator=(const TreeNode &node) {
        if (&node == this)
            return *this;
        if (left) delete left;
        if (right) delete right;

        value = node.value;
        count = node.count;
        if (node.left) left = new TreeNode(*node.left);
        if (node.right) right = new TreeNode(*node.right);

        return *this;
    }

private:
    string value;
    int count;
    TreeNode *left;
    TreeNode *right;
};

class BinStrTree {
public:
    BinStrTree(TreeNode *node) :
        node(node) {
    }

    BinStrTree(const BinStrTree &tree) {
        if (tree.node)
            node = new TreeNode(*tree.node);
        else
            node = 0;
    }

    ~BinStrTree() {
        if (node)
            delete node;
    }

    BinStrTree &operator=(const BinStrTree &tree) {
        if (&tree == this)
            return *this;
        else if (!tree.node){
            if (node)
                delete node;
            node = 0;
        }
        else if (!node)
            node = new TreeNode(*tree.node);
        else 
            *node = *tree.node; 
        
        return *this;
    }

private:
    TreeNode *node;
};

int main() {
    TreeNode *node1 = new TreeNode("a", 1, new TreeNode("b", 2), new TreeNode("c", 3));
    TreeNode *node2 = new TreeNode("d", 1, new TreeNode("e", 2), new TreeNode("f", 3));

    // BinStrTree tree1(node1);
    // BinStrTree tree2(node2);

    // tree1 = tree2;

    // BinStrTree tree3(0);
    // tree3 = tree1;

    BinStrTree tree4(node1);
    BinStrTree tree5(0);

    tree4 = tree5;

    return 0;
}