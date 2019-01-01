#include <stdio.h>
#include <iostream>
#include <fstream>

#include "TextFile.hpp"
#include "Tree.hpp"
#include "TreeNode.hpp"

using namespace std;

int main(int argc, char * argv[])
{
	ifstream myfile("input.txt");
	if (myfile.is_open())
	{
		int arrSize = 0;
		int arr[10000]; // Ideally this would be a vector, but you said array
 
		while ( true)
		{
			int x;
			myfile >> x;
			if (myfile.eof())
				break;
			arr[arrSize++] = x;
		}
		for (int i = 0; i < arrSize; ++i)
			cout << arr[i] << " ";
		cout << endl;
    // I should have closed the file here, but as the program was ending I was lazy	
	}
	else
	{
		cout << "Unable to open file";
	}
	return 0;
	
	/*
    
    TextFile file;
    file.write();
    string str;
    str = file.read();
    file.createSerie(str);
    
    Tree newTree;*/

    
    
	return 0;
}
