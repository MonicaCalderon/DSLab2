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
    void readSerie();
};

#endif // TEXTFILE_HPP
