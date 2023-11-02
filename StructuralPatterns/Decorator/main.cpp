#include "Component.hpp"
#include "Decorator.hpp"
#include <iostream>
int main() {
	std::unique_ptr<Component> comp = std::make_unique<ConcreteComponent>();
	std::cout << comp->getContent() << "\n"; // |Content|
	comp = std::make_unique<DecoratorBracket>(std::move(comp));
	std::cout << comp->getContent() << "\n"; // [|Content|]
	comp = std::make_unique<DecoratorDash>(std::move(comp));
	std::cout << comp->getContent() << "\n"; // -[|Content|]-
	comp = std::make_unique<DecoratorParenthesis>(std::move(comp));
	std::cout << comp->getContent() << "\n"; // (-[|Content|]-)
	comp = std::make_unique<DecoratorBracket>(std::move(comp));
	std::cout << comp->getContent() << "\n"; // [(-[|Content|]-)]

	return 0;
}