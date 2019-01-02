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
			if (myfile.eof())
				break;
			arr[arrSize++] = x;
		}
    // I should have closed the file here, but as the program was ending I was lazy	
	}
	else
	{
		cout << "Unable to open file";
	}
	
	int start = arr[0];
	int end = arr[1];
	int step = arr[2];
	
	cout << start << endl;
	cout << end << endl;
	cout << step << endl;
	
	List serie1;
	serie1.insert(serie1,start);
	serie1.insert(serie1.getList(),end);
	serie1.insert(serie1.getList(),step);
	serie1.showList(serie1.getList());
	
	
	
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
