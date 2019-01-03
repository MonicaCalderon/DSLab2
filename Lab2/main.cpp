#include <stdio.h>
#include <iostream>
#include <fstream>

#include "TextFile.hpp"
#include "Tree.hpp"
#include "TreeNode.hpp"
#include "ListNode.hpp"
#include "List.hpp"

using namespace std;

int main(int argc, char * argv[]) {
	
	int arrSize = 0;
	int arr[10000];
	
	ifstream myfile("input.txt");
	if (myfile.is_open())
	{
		while ( true)
		{
			int x;
			myfile >> x;
            cout<<x<<endl; //Imprime los números que hay en el txt
			if (myfile.eof()) //If end of file
            break;
			arr[arrSize++] = x;
		}
    // I should have closed the file here, but as the program was ending I was lazy	
	}
	else
	{
		cout << "Unable to open file";
	}
    myfile.close();
	
	int start = arr[0];
	int end = arr[1];
	int step = arr[2];
	
	cout << start << endl;
	cout << end << endl;
	cout << step << endl;
    
    //No se xq pero sale un 0 cuando tendría que salir un 2 (si pones un cuarto numero en el txt si que se guarda el 2)
	
        List serie(start, end, step);
	/*  
    
    TextFile file;
    file.write();
    string str;
    str = file.read();
    file.createSerie(str);
    
    Tree newTree;*/

    
    
	return 0;
}
