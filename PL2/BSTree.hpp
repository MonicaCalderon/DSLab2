#include <iostream>

#ifndef BSTREE_HPP
#define BSTREE_HPP

class BSTree
{
public:
    BSTree();
    ~BSTree();
    void insert(int x);
    struct node* insert(int x, node* t);
    struct node* makeEmpty(node* t);
    struct node* findMin(node* t);
    struct node* findMax(node* t);
    node* find(node* t, int x);
    void inorder(node* t);
    void display();
    void search(int x);
    void createTree(int n);
    int getName();
    void setName(int n);
private:
    node *tree = NULL;
    int name;
};

#endif // BSTREE_HPP
