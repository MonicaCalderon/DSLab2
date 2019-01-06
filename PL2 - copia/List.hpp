#include<iostream> //includes NULL

#ifndef LIST_HPP
#define LIST_HPP

#include "ListNode.hpp"

class List
{
public:
    List();
    List(int start, int step, int end);
    void insert(ListNode *&list, int n);
    void showList(ListNode *list);
    bool searchInList(int e);
    void remove(int r);
    ListNode* getList();
    int getStart();
    int getEnd();
    int getStep();
    void setStart(int sta);
    void setEnd(int e);
    void setStep(int ste);
private:
    ListNode node;
    ListNode *list = NULL;
    int start;
    int end;
    int step;
};

#endif // LIST_HPP