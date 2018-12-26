#ifndef TREENODE_HPP
#define TREENODE_HPP

class TreeNode
{
public:
    TreeNode();
    int getData();
    void setData(int data);
private:
    int data;
    TreeNode *right;
    TreeNode *left;
};

#endif // TREENODE_HPP
