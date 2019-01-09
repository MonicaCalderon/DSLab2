#include<fstream>
#include<iostream>

#include "BSTree.hpp"
#include "TextFile.hpp"

using namespace std;

BSTree::BSTree()
{
    //Search, find y makeEmpty no funcionan bien
}

BSTree::~BSTree()
{

}

struct node
{
    int data;
    node* left;
    node* right;
};

void BSTree::insert(int x)
{
    tree = insert(x, tree);
}

node* BSTree::insert(int x, node *t)
{
    if(t == NULL)
    {
        t = new node;
        t->data = x;
        t->left = t->right = NULL;
    }
    else if(x < t->data)
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

node* BSTree::findMin(node* t)
{
    if(t == NULL)
        return NULL;
    else if(t->left == NULL)
        {
        cout<<t->data<<endl;
        return t;
        }
    else
        return findMin(t->left);
}

node* BSTree::findMax(node* t)
{
    if(t == NULL)
        return NULL;
    else if(t->right == NULL)
    {
        cout<<t->data<<endl;
        return t;
    }
    else
        return findMax(t->right);
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

void BSTree::display()
{
    inorder(tree);
    cout << endl;
}

void BSTree::search(int x)
{
    tree = find(tree, x);
}

void BSTree::createTree(int n)
{
    TextFile file;
    int lines = file.countLines();
     int start, end, step;
    if(n<=lines)
    {
        ifstream file("input.txt");
        if (file.is_open())
        {
            int x;
            for(int i = 1; i<=3*(n-1); i++ )
            {
                file>>x;
            }
            file >> x;
            start = x;
            file >> x;
            end = x;
            file >> x;
            step = x;
            
            for (int i=start;i<=end;i = i + step)
            {
                insert(i);
            }
		}
        else
        {
            cout << "Unable to open file";
        }
        file.close();
    }
    //display();
}

int BSTree::getName () {
	return this->name;
}

void BSTree::setName(int n){
        name= n;
    }