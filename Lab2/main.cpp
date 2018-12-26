#include <stdio.h>

#include "TextFile.hpp"
#include "Tree.hpp"
#include "TreeNode.hpp"

int main()
{
    
    TextFile file;
    file.write();
    string str;
    str = file.read();
    file.createSerie(str);
    
    Tree newTree;
    
    
	return 0;
}
