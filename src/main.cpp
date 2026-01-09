//./wehopeitruns tree ~/Documents

#include <iostream>
#include <cstring>
#include <filesystem>
#include "tree.hpp"

using namespace std::filesystem;

int main(int argc, char* argv[])
{
	std::cout << "File Organizer v0.1\n";

	if (argc < 2)
	{
		std::cout << "Help me!\n";
	
	//using "tree" command	
	} else if (std::strcmp(argv[1], "tree") == 0)
	{
		std::cout << "tree command detected\n";
		if (argc < 3)
		{
			std::cout << "Error: missing path argument\n";
		} else 
		{
			path dirPath = argv[2];

			if (exists(dirPath) && is_directory(dirPath))
			{
				std::cout << dirPath << "\n";
				//print the tree structure here
				fileorg::printTree(dirPath);

			} else if (exists(dirPath) && !is_directory(dirPath)) 
			{
				std::cout << "Error: not a directory\n";
			} else 
			{
				std::cout << "Error: path does not exist\n";
			}
		}
	} else 
	{
		std::cout << "unknown command\n";
	}
	return 0;
}

