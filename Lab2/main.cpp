#include <stdio.h>
#include <iostream>
#include <fstream>

#include "TextFile.hpp"
//#include "Tree.hpp"
//#include "TreeNode.hpp"
#include "ListNode.hpp"
#include "List.hpp"
#include "BST.cpp"

using namespace std;

void showContent() {
	// Imprimir el contenido de las series por pantalla
}

int main() {
	
	// Prueba del funcionamiento del BST
	BST t;
    t.insert(20);
    t.insert(25);
    t.insert(15);
    t.insert(10);
    t.insert(30);
    t.display();
	
	int choice;
	bool showMenu = true;
	while (showMenu != false){
	cout << "\n";
	cout << "***   MENU   ***\n";
	cout << "\n";
	cout << " 1 -> Show the series inside the text file.\n";
	cout << " 2 -> Show all the numbers.\n";
	cout << " 3 -> Count all distinct numbers.\n";
	cout << " 4 -> Calculate the average number of both DS.\n";
	cout << " 5 -> Get the max and min numbers of both DS.\n";
	cout << " 6 -> Search for a specific number.\n";
	cout << " 7 -> Search for the number with higher occurrences.\n";
	cout << " 8 -> Empty both DS and regenerate them using the series.\n";
	cout << " 9 -> Finish the program.\n";
	cout << "\n";
	cout << "***   ****   ***\n";
	cout << "\n";
	cout << "> Enter your choice and press return: ";
	cin >> choice;
	cout << "\n";

	switch (choice)
	{
	case 1:
	cout << "game start!\n";
	// rest of code here
	break;
	case 2:
	cout << "Story so far....\n";
	// rest of code here
	break;
	case 3:
	cout << "Ahahah, you really think I will help you?\n";
	// rest of code here
	break;
	case 4:
	cout << "End of Program.\n";
	break;
	case 5:
	cout << "game start!\n";
	// rest of code here
	break;
	case 6:
	cout << "game start!\n";
	// rest of code here
	break;
	case 7:
	cout << "game start!\n";
	// rest of code here
	break;
	case 8:
	cout << "game start!\n";
	// rest of code here
	break;
	case 9:
	cout << "> Goodbye!";
	showMenu = false;
	break;
	default:
	cout << "> The input number is not a valid choice. Choose again: ";
	cin >> choice;
	break;
	}

	}
	/*
	int arrSize = 0;
	int arr[10000];
	
	ifstream myfile("input.txt");
	if (myfile.is_open())
	{
        int x;
		while ( true)
		{
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
    
    List serie(start, end, step);
    
    TextFile file;
    
	/*  
    
    TextFile file;
    file.write();
    string str;
    str = file.read();
    file.createSerie(str);
    
    Tree newTree;*/

    
    
	return 0;
}
