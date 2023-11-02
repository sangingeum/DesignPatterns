#include "ConcreteOriginator.hpp"
#include <iostream>
std::shared_ptr<Memento> ConcreteOriginator::createMemento() {
	return std::shared_ptr<ConcreteMemento>(new ConcreteMemento(*this, m_status, m_x, m_y));
}
void ConcreteOriginator::applyMemento(const Memento& memento) {
	auto& convertedMemento = static_cast<const ConcreteMemento&>(memento);
	m_status = convertedMemento.m_status;
	m_x = convertedMemento.m_x;
	m_y = convertedMemento.m_y;
}

void ConcreteOriginator::updateStatus() {
	m_status++;
	m_x += 2;
	m_y += 1;
}

void ConcreteOriginator::showStatus() {
	std::cout << "( " << m_x << ", " << m_y << " ), status :" << m_status << "\n";
}