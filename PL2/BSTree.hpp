#ifndef BSTREE_HPP
#define BSTREE_HPP

class BSTree
{
public:
    BSTree();
    ~BSTree();
    BSTree(int start, int end, int step);
    struct Node* insert(int x, Node* t);
    void insert2(int x);
private:
    struct Node* root;
    struct Node;
    struct Node *tree;
};

#endif // BSTREE_HPP
