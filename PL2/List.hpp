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
    int getName();
    void setName(int n);
    float average(ListNode *list);
	void distinct(ListNode *list);
    int findMin(ListNode *list);
    int findMax(ListNode *list);
private:
    ListNode node;
    ListNode *list = NULL;
    int start;
    int end;
    int step;
    int name;
    int nElem = 0;
};

#endif // LIST_HPP