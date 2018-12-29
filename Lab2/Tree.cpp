#include "Tree.hpp"
//#include "TreeNode.hpp"

#include<cstddef> //Includes NULL
#include<stdio.h>
#include<iostream>

using namespace std;

Tree::Tree()
{
    
}

struct Node
{
    int data;
    Node *right;
    Node *left;
};

struct Node *createNode(int n)
{
    Node *newNode = new Node();
    
    newNode->data = n;
    newNode->right = NULL;
    newNode->left = NULL;
    
    return newNode;
}

void insertNode(struct Node *&tree, int n) //We insert nodes in the tree
{
    if (tree == NULL) //If tree is empty
    {
        struct Node *newNode = createNode(n);
        tree = newNode;
    }
    else //If the tree is not empty
    {
        int rootValue = tree->data; //We get the value of the root
        if(n < rootValue) //If the element is minor than the root, we insert in left
        {
            insertNode(tree->left, n);
        }
        else //If the element is major than the root, insert in the right
        {
            insertNode(tree->right, n);
        }
        
    }
}

void showTree(struct Node *tree, int counter)
{
    if(tree == NULL) //If the tree is empty 
    {
        return;
    }
    else
    {
        showTree(tree->right, counter+1);
        for(int i=0; i<counter;i++)
        {
        cout<<"     ";
        }
        cout<<tree->data<<endl;
        showTree(tree->left,counter+1);
    }
}

bool searchInTree(struct Node *tree, int n)
{
    if(tree == NULL)
    {
        return false;
    }
    else if(tree->data == n)
    {
        return searchInTree(tree->left,n);
    }
    else
    {
        return searchInTree(tree->right,n);
    }
}

//Recorrer el árbol en preorden: primero se muestra la raiz (root), luego el izq y luego el dcho
//Primero imprimimos la raíz, luego el sub arbol izq y luego el dcho
void preOrder(struct Node *tree)
{
    if(tree == NULL)
    {
        return;
    }
    else
    {
        cout<<tree->data<<" - ";
        preOrder(tree->left);
        preOrder(tree->right);
    }
}