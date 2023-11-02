#include "ConcreteMediator.hpp"
#include "Component.hpp"

int main() {
	// Create components and a mediator & Connect them
	auto comp1 = std::make_shared<ConcreteComponent1>();
	auto comp2 = std::make_shared<ConcreteComponent2>();
	auto mediator = std::make_shared<ConcreteMediator>(comp1, comp2);
	comp1->setMediator(mediator);
	comp2->setMediator(mediator);
	// Trigger actions
	comp1->TriggerA(); 
	comp2->TriggerC(); 
	return 0;
}