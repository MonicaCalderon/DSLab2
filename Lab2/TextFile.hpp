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
    void createSerie(string str);
};

#endif // TEXTFILE_HPP
