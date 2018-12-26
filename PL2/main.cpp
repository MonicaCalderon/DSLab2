#include<stdio.h>
#include <iostream>
#include<fstream>
#include<stdlib.h>

#include "Serie.hpp"
#include "TextFile.hpp"

using namespace std;

int main()
{
    TextFile file;
    file.write();
    write();
    
	return 0;
}

void write()
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
