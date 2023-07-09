#include "ConcreteMediator.hpp"
#include <iostream>
ConcreteMediator::ConcreteMediator(const std::shared_ptr<ConcreteComponent1>& comp1, const std::shared_ptr<ConcreteComponent2>& comp2)
	: m_comp1(comp1), m_comp2(comp2){}

void ConcreteMediator::notify(Component& component, const std::string& type) {
	std::cout << "Received action " << type << "\n";
	if (type == "A") {
		m_comp2->TriggerD();
	}
	else if (type == "C") {
		m_comp1->TriggerB();
	}
}