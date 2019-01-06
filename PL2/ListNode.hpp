#ifndef LISTNODE_HPP
#define LISTNODE_HPP

class ListNode
{
public:
    ListNode();

    int getData();
    ListNode* getNext();
    
private:
    int data;
    ListNode *next;

    friend class List;
};

#endif // LISTNODE_HPP