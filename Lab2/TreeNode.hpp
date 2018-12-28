#ifndef TREENODE_HPP
#define TREENODE_HPP

class TreeNode
{
public:
    TreeNode();
    int getData();
    void setData(int data);
    TreeNode* getLeft();
    void setLeft(TreeNode *left);
    TreeNode* getRight();
    void setRight(TreeNode *right);
private:
    int data;
    TreeNode *right;
    TreeNode *left;
    
    friend class Tree;
};

#endif // TREENODE_HPP
