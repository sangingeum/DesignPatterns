#include "RedefinedAbstraction.hpp"


void RedefinedAbstractionA::introduce() {
	std::cout << "Hi, I'm ";
	showName();
	std::cout << " I can ";
	showFeature();
	std::cout << "\n";
}


void RedefinedAbstractionB::exercise() {
	showName();
	std::cout << " does the following exercices: ";
	showFeature();
	std::cout << "\n";
}