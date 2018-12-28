#include "Tree.hpp"
#include "TreeNode.hpp"

#include<cstddef> //Includes NULL
#include<stdio.h>
#include<iostream>

using namespace std;

Tree::Tree()
{
    
}

void insertNode(TreeNode *tree, int n) //We insert nodes in the tree
{
    if (tree == NULL) //If tree is empty
    {
        TreeNode newNode;
        newNode.setData(n);
        *tree = newNode;
    }
    else //If the tree is not empty
    {

        TreeNode rootNode = *tree; //Create a variable with the value of the root node
        int rootValue = rootNode.getData();
        if(n < rootValue)
        {
            insertNode(rootNode.getLeft(), n);
        }
        else
        {
            insertNode(rootNode.getRight(), n);
        }
        
    }
}

