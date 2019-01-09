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
    void showContent();
    int countLines();
};

#endif // TEXTFILE_HPP
