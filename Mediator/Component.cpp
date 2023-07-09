#include "Component.hpp"
void Component::setMediator(const std::shared_ptr<Mediator>& mediator) {
	m_mediator = mediator;
}

void ConcreteComponent1::TriggerA() {
	m_mediator->notify(*this, "A");
}
void ConcreteComponent1::TriggerB() {
	m_mediator->notify(*this, "B");
}
void ConcreteComponent2::TriggerC() {
	m_mediator->notify(*this, "C");
}
void ConcreteComponent2::TriggerD() {
	m_mediator->notify(*this, "D");
}