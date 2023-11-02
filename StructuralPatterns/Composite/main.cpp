#include "Leaf.hpp"
#include "Composite.hpp"
#include <iostream>
int main() {
	auto root = std::make_shared<Composite>();
	auto firstNode = std::make_shared<Leaf>(50);
	root->addChild(firstNode);
	root->addChild(std::make_shared<Leaf>(30));
	root->addChild(std::make_shared<Leaf>(40));

	std::cout << "Total price: " << root->calculatePrice() << "\n"; //50 + 30 + 40 = 120

	auto internalNode = std::make_shared<Composite>(4);
	internalNode->addChild(std::make_shared<Leaf>(3));
	internalNode->addChild(std::make_shared<Leaf>(2));
	internalNode->addChild(std::make_shared<Leaf>(1));

	root->addChild(internalNode);
	std::cout << "Total price: " << root->calculatePrice() << "\n"; //50 + 30 + 40 + 4 + 3 + 2 + 1 = 130
	root->removeChild(internalNode);
	std::cout << "Total price: " << root->calculatePrice() << "\n"; //50 + 30 + 40 = 120
	root->removeChild(firstNode);
	std::cout << "Total price: " << root->calculatePrice() << "\n"; //30 + 40 = 70
	return 0;
}