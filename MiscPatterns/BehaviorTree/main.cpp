#include "BehaviorTree.hpp"
#include "Leaf.hpp"
#include "Fallback.hpp"
#include "Sequence.hpp"
#include "Decorator.hpp"
#include <iostream>

int main() {
	auto printA = std::make_unique<Leaf>([]() {std::cout << "A\n"; return Node::State::Success; });
	auto printB = std::make_unique<Leaf>([]() {std::cout << "B\n"; return Node::State::Failure; });
	auto printC = std::make_unique<Leaf>([]() {std::cout << "C\n"; return Node::State::Failure; });
	auto printD = std::make_unique<Leaf>([]() {std::cout << "D\n"; return Node::State::Success; });
	auto invertedB = std::make_unique<Decorator>(std::move(printB));
	auto sequence = std::make_unique<Sequence>();
	sequence->addChild(std::move(printA));
	sequence->addChild(std::move(invertedB));
	sequence->addChild(std::move(printC));
	sequence->addChild(std::move(printD));


	BehaviorTree tree{ std::move(sequence) };
	tree.tick(); // A
	tree.tick(); // B
	tree.tick(); // C

	tree.tick(); // A
	tree.tick(); // B
	tree.tick(); // C

	// D is not triggered because C returns a failure


}