#include "TreeNode.hpp"

TreeNode::TreeNode()
{
    
}

int TreeNode::getData()
{
    return this->data;
}

void TreeNode::setData(int d)
{
    data = d;
}

TreeNode* TreeNode::getLeft()
{
    return this->left;
}

void TreeNode::setLeft(TreeNode *l)
{
    left = l;
}

TreeNode* TreeNode::getRight()
{
    return this->right;
}

void TreeNode::setRight(TreeNode *r)
{
    right = r;
}

