#include "ConcreteVisitor.hpp"
#include <vector>
#include <memory>
#include <iostream>
int main() {
	// Create visitors
	ConcreteVisitorAdd addVisitor;
	ConcreteVisitorMultiply multiplyVisitor;

	// Create a vector of A elements
	std::vector<std::unique_ptr<Element>> elements;
	for (size_t i = 1; i <= 4; ++i) {
		elements.push_back(std::make_unique<ConcreteElementA>(i*1.f));
	}

	// Apply Add Visitor
	for (auto& element : elements) {
		element->accept(addVisitor);
	}
	std::cout << addVisitor.reset() << "\n"; // 1 + 2 + 3 + 4 = 10

	// Apply Multiply Visitor
	for (auto& element : elements) {
		element->accept(multiplyVisitor);
	}
	std::cout << multiplyVisitor.reset() << "\n"; // 1 * 2 * 3 * 4 = 24

	// Append B elements
	for (size_t i = 1; i <= 2; ++i) {
		elements.push_back(std::make_unique<ConcreteElementB>(i * 1.f, i*2.f));
	}

	// Apply Add Visitor
	for (auto& element : elements) {
		element->accept(addVisitor);
	}
	std::cout << addVisitor.reset() << "\n"; // 1 + 2 + 3 + 4 + (1 + 2) + (2 + 4) = 19

	// Apply Multiply Visitor
	for (auto& element : elements) {
		element->accept(multiplyVisitor);
	}
	std::cout << multiplyVisitor.reset() << "\n"; // 1 * 2 * 3 * 4 * (1 * 2) * (2 * 4) = 384

	return 0;
}