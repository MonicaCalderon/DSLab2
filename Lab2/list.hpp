#include<iostream> //includes NULL

#ifndef LIST_HPP
#define LIST_HPP

#include "ListNode.hpp"

class List
{
public:
    List();
    ~List();
    List(int size);
    void insert(ListNode *&list, int n);
    void showList(ListNode *list);
    bool searchInList(int e);
    void remove(int r);
    ListNode* getList();
    int getSize();
    void setSize(int s);
private:
    ListNode node;
    ListNode *list = NULL;
    int size;
};

#endif // LIST_HPP