#include "RedefinedAbstraction.hpp"

void RedefinedAbstractionA::showName() {
	m_implementor.showFirstName();
	std::cout << " ";
	m_implementor.showLastName();
}
void RedefinedAbstractionA::showFeature() {
	m_implementor.showOperation();
}
void RedefinedAbstractionA::introduce() {
	std::cout << "Hi, I'm ";
	showName();
	std::cout << " I can ";
	showFeature();
	std::cout << "\n";
}

void RedefinedAbstractionB::showName() {
	m_implementor.showFirstName();
	std::cout << " ";
	m_implementor.showLastName();
}
void RedefinedAbstractionB::showFeature() {
	m_implementor.showOperation();
}
void RedefinedAbstractionB::exercise() {
	showName();
	std::cout << " does the following exercices: ";
	showFeature();
	std::cout << "\n";
}