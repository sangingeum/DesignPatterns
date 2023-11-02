#include "Container.hpp"
#include <iostream>
int main() {
	// Define a Binary Tree
	Container tree;
	auto root = tree.getRoot();
	root->set(1);
	root->makeLeft(2);
	root->makeRight(3);
	auto left = root->left;
	left->makeLeft(4);
	left->makeRight(5);
	auto right = root->right;
	right->makeLeft(6);
	right->makeRight(7);
	/* Tree Struture
			  1
		  2	      3
		4	5	6	7
	*/
	// Print tree
	for (auto it = tree.InorderBegin(); !it->isOver(); it->next()) {
		float cur = it->getValue();
		std::cout << cur << " ";
	}
	// 4 2 5 1 6 3 7

	// Increment all node values by 1
	std::cout << "\n";
	for (auto it = tree.InorderBegin(); !it->isOver(); it->next()) {
		it->getValue() += 1;
	}
	// Print tree
	for (auto it = tree.InorderBegin(); !it->isOver(); it->next()) {
		float cur = it->getValue();
		std::cout << cur << " ";
	}
	// 5 3 6 2 7 4 8
	return 0;
}