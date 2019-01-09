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
    int findMin();
    int findMax();
    float average();
    node* find(node* t, int x);
    void inorder(node* t);
    void display();
    void search(int x);
    void createTree(int n);
    int getName();
    void setName(int n);
    void showTree();
    bool searchInTree(int x);
    bool empty(BSTree t);
    int getNDistint();
private:
    node *tree = NULL;
    int name;
    int nDistint = 0;  
    int nRep = 0;
    int nElem = 0;
};

#endif // BSTREE_HPP
