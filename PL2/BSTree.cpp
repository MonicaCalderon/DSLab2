#include <fstream>
#include <iostream>

#include "BSTree.hpp"
#include "TextFile.hpp"

using namespace std;

BSTree::BSTree()
{

}

struct node {
    int data;
    node* left;
    node* right;
};

void BSTree::createTree() //Creates the tree with the series of the txt
{
    nRep = 0;
    nDistint = 0;
    nElem = 0;
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

            for(int i = start; i <= end; i = i + step) 
            {
                if(searchInTree(i))
                    nRep++;
                insert(i);
                nElem++;
                nDistint= nElem - nRep;
            }
        }
    } else {
        cout << "Unable to open file";
    }
    file.close();
    cout << nRep << " numbers are duplicated." << endl << "The tree remove it themself. " << endl;
}

void BSTree::insert(int x) //inserts elements in the implicit tree
{
    tree = insert(x, tree);
}

node* BSTree::insert(int x, node* t) //inserts elements in a explicit tree
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

node* BSTree::makeEmpty()
{
    if(tree != NULL)
    {
        while(tree->right !=NULL)
        {
            delete tree;
            tree = tree->right;
        }
         while(tree->left !=NULL)
        {
            delete tree;
            tree = tree->left;
        }
    }
    tree = NULL;
    cout<<"This is the new tree: ";
    display();
    cout<<"(empty)"<<endl;
    return tree;
}

int BSTree::findMin()
{
    if(tree == NULL)
        return 0;
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
        return 0;
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
    av = sum/nDistint;
    return av;
}

void BSTree::inorder(node* t) //Used in function display
{
    if(t == NULL)
        return;
    inorder(t->left);
    cout << t->data << " ";
    inorder(t->right);
}

void BSTree::display() //Show the tree
{
    inorder(tree);
    cout << endl;
}

bool BSTree::searchInTree(int x) //Search a element in the tree
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

int BSTree::getNDistint() {
	return this->nDistint;
}