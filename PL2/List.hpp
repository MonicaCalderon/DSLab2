#include<iostream> //includes NULL

#ifndef LIST_HPP
#define LIST_HPP

#include "ListNode.hpp"

class List
{
public:
    List();
    List(int start, int step, int end);
    void createList(int t);
    void insert(ListNode *&list, int n);
    void showList();
    bool searchInList(int e);
    void remove(int r);
    ListNode* getList();
    int getNDistint();
    void setNDistint(int nd);
    int getStart();
    int getEnd();
    int getStep();
    void setStart(int sta);
    void setEnd(int e);
    void setStep(int ste);
    int getName();
    void setName(int n);
    float average(ListNode *list);
	void distinct();
    int findMin(ListNode *list);
    int findMax(ListNode *list);
    void makenull(int t);
private:
    ListNode node;
    ListNode *list = NULL;
    int start;
    int end;
    int step;
    int name;
    int nRep = 0;
    int nDistint = 0;
    int nElem = 0;
};

#endif // LIST_HPP