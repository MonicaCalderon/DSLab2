#ifndef TREE_HPP
#define TREE_HPP

#include "TreeNode.hpp"

class Tree
{
public:
    Tree();
    struct Node *createNode(int n);
    void insertNode(struct Node *&tree, int n);
    void showTree(struct Node *tree, int counter);
    bool searchInTree(struct Node *tree, int n);
    void preOrder(struct Node *tree);

private:
    struct Node;
};

class Tree
{
public:
	Tree();
	~Tree();
};



#endif // TREE_HPP
