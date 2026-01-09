#ifndef TREE_HPP
#define TREE_HPP

#include <filesystem>
#include <string>

namespace fileorg
{	
	//call: fileorg::printTree()
	void printTree(std::filesystem::path dirPath);
}

#endif
