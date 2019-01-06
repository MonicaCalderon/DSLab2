#include<iostream>

#include "BSTree.hpp"

using namespace std;

BSTree::BSTree()
{
    
}

BSTree::~BSTree()
{
    
}

BSTree::BSTree(int start, int end, int step)
{
    for (int i=start;i<=end;i = i + step)
    {
        insert2(i);
    }
}

struct Node
{
    int data;
    Node *right;
    Node *left;
};

Node* insert(int x, Node* t)
{
        if(t == NULL)
        {
            t = new Node;
            t->data = x;
            t->left = t->right = NULL;
        }
        else if(x < t->data)
            t->left = insert(x, t->left);
        else if(x > t->data)
            t->right = insert(x, t->right);
        return t;
}

Node* makeEmpty(Node* t)
    {
        if(t == NULL)
            return NULL;
        {
            makeEmpty(t->left);
            makeEmpty(t->right);
            delete t;
        }
        return NULL;
    }

Node* findMin(Node* t)
    {
        if(t == NULL)
            return NULL;
        else if(t->left == NULL)
            return t;
        else
            return findMin(t->left);
    }

Node* findMax(Node* t)
    {
        if(t == NULL)
            return NULL;
        else if(t->right == NULL)
            return t;
        else
            return findMax(t->right);
    }

Node* remove(int x, Node* t)
    {
        Node* temp;
        if(t == NULL)
            return NULL;
        else if(x < t->data)
            t->left = remove(x, t->left);
        else if(x > t->data)
            t->right = remove(x, t->right);
        else if(t->left && t->right)
        {
            temp = findMin(t->right);
            t->data = temp->data;
            t->right = remove(t->data, t->right);
        }
        else
        {
            temp = t;
            if(t->left == NULL)
                t = t->right;
            else if(t->right == NULL)
                t = t->left;
            delete temp;
        }

        return t;
    }

void inorder(Node* t)
    {
        if(t == NULL)
            return;
        inorder(t->left);
        cout << t->data << " ";
        inorder(t->right);
    }

Node* find(Node* t, int x)
    {
        if(t == NULL)
            return NULL;
        else if(x < t->data)
            return find(t->left, x);
        else if(x > t->data)
            return find(t->right, x);
        else
            return t;
    }
    
void insert2(int x)
    {
        struct Node* root;
        root = insert(x, root);
    }

void remove2(int x)
    {
        struct Node* root;
        root = remove(x, root);
    }

void display2()
    {
        struct Node* root;
        inorder(root);
        cout << endl;
    }

void search2(int x)
    {
        struct Node* root;
        root = find(root, x);
    }

