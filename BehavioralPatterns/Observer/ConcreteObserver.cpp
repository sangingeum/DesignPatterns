#include "ConcreteObserver.hpp"
#include <format>
#include <iostream>
void ConcreteObserver::update() {
	m_state = m_subject->getState();
	std::cout << std::format("Observer state has changed to {}\n", m_state);
}