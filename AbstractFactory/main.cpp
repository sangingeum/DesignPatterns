#include "ConcreteFactory.hpp"

int main() {
	auto& facA = ConcreteFactoryA::instance();
	auto& facB = ConcreteFactoryB::instance();
	auto chairA = facA.createChair(0);
	auto deskA = facA.createDesk(1);
	auto chairB = facB.createChair(2);
	auto deskB = facB.createDesk(3);
	chairA->showInfo();
	chairA->sitOn();
	chairB->showInfo();
	chairB->sitOn();
	deskA->showInfo();
	deskA->put("PersonA");
	deskB->showInfo();
	deskB->put("PersonB");
	return 0;
}