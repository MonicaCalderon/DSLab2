#include "TextFile.hpp"
#include "List.hpp"

#include<iostream>
#include<fstream>

using namespace std;

TextFile::TextFile()
{
}

void TextFile::write() //Write a new serie in the txt
{
    int start, end, step;
    string line, str;
    ifstream fileIn;
    fileIn.open("input.txt");
    cout<<"What is the first number of the new serie? "<<endl;
    cin>> start;
    cout<<"What is the last number of the new serie? "<<endl;
    cin>> end;
    cout<<"And the step of the serie? "<<endl;
    cin>> step;
    while(getline(fileIn, line))
        str += line + "\n";
    fileIn.close();
    ofstream fileOut;//Crea un archivo en el q se va a escribir (se borra lo q ya había)
    fileOut.open("input.txt");
    //Escribimos lo que teníamos guardado y la nueva
    fileOut << str;

    fileOut << start << " " << end << " " << step << " " << endl; //Añadimos un espacio al final para que detecte el final del archivo
    fileOut.close();
}

void TextFile::showContent() //Show the content in the txt
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

int TextFile::countLines() //Count the lines of the txt
{
    int lines;
    ifstream fileIn;
    string str;
    fileIn.open("input.txt");
    while(fileIn.good()) if(fileIn.get()=='\n') lines++;
    fileIn.close();
        
    return lines;
}