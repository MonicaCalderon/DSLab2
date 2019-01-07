#include "List.hpp"

#include<iostream>

using namespace std;

#ifndef TEXTFILE_HPP
#define TEXTFILE_HPP

class TextFile
{
public:
    TextFile();
    void write(int start, int end, int step);
    string read();
    List createList(int n);
    void createTree(int n);
    void showContent();
    int countLines();
};

#endif // TEXTFILE_HPP
