#include "TextFile.hpp"

TextFile::TextFile()
{
}

void TextFile::write()
{
        ofstream file;
        
        file.open("prueba.txt" ,ios::out);
        
        if(file.fail())
        {
                cout<<"We can't open the file";
                exit(1);
        }
        
        file<<"Hola que tal?";
        
        file.close();
        
}