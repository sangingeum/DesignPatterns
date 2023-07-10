#include "ConcreteState.hpp"
#include "Context.hpp"

int main() {
	Context person("Jason");
	person.setState(std::make_unique<ConcreteStateNormal>());
	person.move(); // Jason walks.
	person.talk(); // Jason talks.

	person.setState(std::make_unique<ConcreteStateCautious>());
	person.move(); // Jason crawls.
	person.talk(); // Jason whispers.

	person.setState(std::make_unique<ConcreteStateCombat>());
	person.move(); // Jason runs.
	person.talk(); // Jason shouts.
}