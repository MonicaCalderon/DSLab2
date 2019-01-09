#include <iostream>

#ifndef BSTREE_HPP
#define BSTREE_HPP

class BSTree
{
public:
    BSTree();
    void insert(int x);
    struct node* insert(int x, node* t);
    struct node* makeEmpty();
    int findMin();
    int findMax();
    float average();
    void inorder(node* t);
    void display();
    void search(int x);
    void createTree();
    bool searchInTree(int x);
    int getNDistint();
private:
    node *tree = NULL;
    int nDistint;  
    int nRep;
    int nElem;
};

#endif // BSTREE_HPP
