#include "TextFile.hpp"

#include<iostream>
#include<fstream>

using namespace std;

TextFile::TextFile()
{
    write(1,10,2);
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

void TextFile::readSerie()
{
    int arrSize = 3;
    int arr[1000];
	ifstream file("input.txt");
	if (file.is_open())
	{
		while ( true)
		{
			int x;
			file >> x;
            cout<<x<<endl; //Imprime los números que hay en el txt
			if (file.eof()) //If end of file
            break;
			arr[arrSize++] = x;
		}
    // I should have closed the file here, but as the program was ending I was lazy	
	}
	else
	{
		cout << "Unable to open file";
	}
    file.close();
}