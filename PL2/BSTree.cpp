#include <fstream>
#include <iostream>

#include "BSTree.hpp"
#include "TextFile.hpp"

using namespace std;

BSTree::BSTree()
{
    for(int i = 1; i < 27; i++) {
        insert(i);
        nElem++;
        nDistint++;
    }
    display();
    // Search, find y makeEmpty no funcionan bien
}

BSTree::~BSTree()
{
}

struct node {
    int data;
    node* left;
    node* right;
};

void BSTree::createTree(int t)
{
    nRep = 0;
    TextFile txt;
    int lines = txt.countLines();
    int x, start, end, step;
    ifstream file("input.txt");
    if(file.is_open()) {
        for(int j = 1; j <= lines; j++) {
            file >> x;
            start = x;
            file >> x;
            end = x;
            file >> x;
            step = x;

            for(int i = start; i <= end; i = i + step) {
                if(t == 0) {
                    if(!searchInTree(i)) {
                        insert(i, tree);
                        nDistint++;
                    } else
                        nRep++;
                } else {
                    insert(i, tree);
                    nElem++;
                }
            }
        }
    } else {
        cout << "Unable to open file";
    }
    file.close();
    if(t == 0)
        cout << nRep << " numbers are duplicated." << endl << "They has been deleted from the list. " << endl;
}

void BSTree::insert(int x)
{
    tree = insert(x, tree);
}

node* BSTree::insert(int x, node* t)
{
    if(t == NULL) {
        t = new node;
        t->data = x;
        t->left = t->right = NULL;
    } else if(x < t->data)
        t->left = insert(x, t->left);
    else if(x > t->data)
        t->right = insert(x, t->right);
    return t;
}

node* BSTree::makeEmpty(node* t)
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

int BSTree::findMin()
{
    if(tree == NULL)
        return NULL;
    node* aux = tree;
    int min = aux->data;
    while(aux->left !=NULL)
    {
        aux = aux->left;
        min = aux->data;
    }
    return min;
    
}

int BSTree::findMax()
{
    if(tree == NULL)
        return NULL;
    node* aux = tree;
    int max = aux->data;
    while(aux->right !=NULL)
    {
        aux = aux->right;
        max = aux->data;
    }
    return max;
}

float BSTree::average()
{
    float av;
    if(tree == NULL)
        return 0;
    node* aux = tree;
    float sum = aux->data;
    while(aux->right !=NULL)
    {
        aux = aux->right;
        sum = sum + aux->data;
    }
    av = sum/nElem;
    return av;
}

void BSTree::inorder(node* t)
{
    if(t == NULL)
        return;
    inorder(t->left);
    cout << t->data << " ";
    inorder(t->right);
}

node* BSTree::find(node* t, int x)
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

void BSTree::showTree()
{
}

void BSTree::display()
{
    inorder(tree);
    cout << endl;
}

bool BSTree::searchInTree(int x)
{
    node* actual = tree;
    while(actual != NULL) {
        if(x == actual->data)
            return true;
        else if(x < actual->data)
            actual = actual->left;
        else if(x > actual->data)
            actual = actual->right;
    }
    return false;
}

int BSTree::getName()
{
    return this->name;
}

void BSTree::setName(int n)
{
    name = n;
}

int BSTree::getNDistint() {
	return this->nDistint;
}