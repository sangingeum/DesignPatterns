#include "ConcreteFactory.hpp"

int main() {
	// Get FactoryA and FactoryB instances
	auto& facA = ConcreteFactoryA::instance();
	auto& facB = ConcreteFactoryB::instance();

	// Create A products with ids 0 and 10
	auto chairA = facA.createChair(0);
	auto deskA = facA.createDesk(10);

	// Create B products with ids 20 and 30
	auto chairB = facB.createChair(20);
	auto deskB = facB.createDesk(30);

	// Use chairs
	chairA->showInfo();
	chairA->sitOn();
	chairB->showInfo();
	chairB->sitOn();

	// Use desks
	deskA->showInfo();
	deskA->put("PersonA");
	deskB->showInfo();
	deskB->put("PersonB");
	return 0;
}