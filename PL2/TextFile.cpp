#include "TextFile.hpp"
#include "List.hpp"
#include "BST.cpp"

#include<iostream>
#include<fstream>

using namespace std;

TextFile::TextFile()
{
}

void TextFile::write(int start, int end, int step) //Escribe en el archivo
{
    read();
    string str[0] = read(); //Guardamos la primera linea escrita (habría que hacerlo para x lineas)
    ofstream fileOut;//Crea un archivo en el q se va a escribir (se borra lo q ya había)
    fileOut.open("input.txt");
    //Escribimos la linea que teníamos guardadas y la nueva
    fileOut << str[0] << endl << start << " " << end << " " << step << " " << endl; //Añadimos un espacio al final para que detecte el final del archivo
    fileOut.close();
}

string TextFile::read() //Lee la primera línea escrita en el txt
{
    ifstream fileIn;
    string str;
    
    fileIn.open("input.txt");
    getline(fileIn, str);//coge la primera línea

    fileIn.close();
    
    cout<<"Frase leida: "<< str << endl; //Imprime la última línea cogida
    return str;
}

void TextFile::showContent()
{
    int lines = countLines();
    string str;
    ifstream fileIn;
    fileIn.open("input.txt");
    for(int i = 0; i<lines; i++) //La ultima siempre será una línea en blanco
    {
        getline(fileIn, str);//coge la primera línea
        cout<<"Series readed "<<i+1<<": "<< str << endl; //Imprime la última línea cogida

    }
    fileIn.close();
}

int TextFile::countLines()
{
    int lines;
    ifstream fileIn;
    string str;
    fileIn.open("input.txt");
    while(fileIn.good()) if(fileIn.get()=='\n') lines++;
    fileIn.close();
        
    return lines;
}

List TextFile::createList(int n)
{
    int lines = countLines();
    if(n<=lines)
    {
        int start, end, step;
        ifstream file("input.txt");
        if (file.is_open())
        {
            int x;
            for(int i = 1; i<=3*(n-1); i++ )
            {
                file>>x;
            }
            file >> x;
            start = x;
            file >> x;
            end = x;
            file >> x;
            step = x;
            
            List *list = new List(start, end, step); 
            return *list;
		}
        else
        {
            cout << "Unable to open file";
            List *list;
            return *list;
        }
        file.close();
    }
}

/*
BST TextFile::createTree(int n)
{
    int lines = countLines();
    if(n<=lines)
    {
        int start, end, step;
        ifstream file("input.txt");
        if (file.is_open())
        {
            int x;
            for(int i = 1; i<=3*(n-1); i++ )
            {
                file>>x;
            }
            file >> x;
            start = x;
            file >> x;
            end = x;
            file >> x;
            step = x;
            
            BST tree = new BST(start, end, step); 
            return tree;
		}
        else
        {
            cout << "Unable to open file";
            BST tree;
            return tree;
        }
        file.close();
    }
}
*/