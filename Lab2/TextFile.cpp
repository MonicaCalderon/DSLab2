#include "TextFile.hpp"

#include<iostream>
#include<fstream>

using namespace std;

TextFile::TextFile()
{
}

void TextFile::write() //Escribe en el archivo
{
    ofstream fileOut;//Crea un archivo en el q se va a escribir (se borra lo q ya había)
    fileOut.open("prueba.txt");
    fileOut << "Hola texto prueba \nOtra linea";
    fileOut.close();
}

string TextFile::read() //Lee la primera línea escrita en el txt
{
    ifstream fileIn;
    string str;
    
    fileIn.open("seriePrueba.txt");
    getline(fileIn, str);//coge la primera línea
    getline(fileIn, str);//coge la segunda línea
                                //Etc

    fileIn.close();
    
    cout<<"Frase leida: "<< str << endl; //Imprime la última línea cogida
    return str;
}

void TextFile::createSerie(string str)
{
    int i=0;
    int n1, n2, n3;
    if (str[i]==NULL) 
    {
        cout<<1<<endl;
    }
    else if (str[i] == ' ')
    {
        
        cout<<2<<endl;
    }
    else
    {
        cout<<3<<endl;
    }
    
    
    
}