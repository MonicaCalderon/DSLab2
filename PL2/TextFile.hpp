#include "List.hpp"
#include "ListNode.hpp"

#include<iostream>

using namespace std;

#ifndef TEXTFILE_HPP
#define TEXTFILE_HPP

class TextFile
{
public:
    TextFile();
    void write();
    string read();
    List createList();
    List createList2(int n);
    void createTree(int n);
    void showContent();
    int countLines();
private:
    List *list;
    ListNode *listN;
};

#endif // TEXTFILE_HPP
