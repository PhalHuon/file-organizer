//tree implementation

#include <iostream>
#include <vector>
#include "tree.hpp"

using namespace std::filesystem;

void printTreeHelper(std::filesystem::path dirPath, std::string prefix)
{
	std::vector<directory_entry> entries;
	for (const auto& entry : directory_iterator{dirPath})
	{
		entries.push_back(entry);
	}
	for (int i=0; i < entries.size(); i++)
	{	
		//check if last or not
		bool isLast = (i == entries.size() - 1);

		std::cout << prefix;

		if (isLast){
			std::cout << "└──";
		} else {
			std::cout << "├──";
		}

		//file name
		std::cout << entries[i].path().filename() << "\n";
		
		//if directory, recurse
		if (is_directory(entries[i])){
			std::string newPrefix;

			if (isLast){
				newPrefix = prefix + "    ";
			} else {
				newPrefix = prefix + "│   ";
			}
			printTreeHelper(entries[i].path(), newPrefix);
		}
	}
}	

namespace fileorg
{
	void printTree(std::filesystem::path dirPath)
	{
		printTreeHelper(dirPath, "");
	}
}
