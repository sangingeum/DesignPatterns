#include "ConcreteObserver.hpp"
#include <format>
#include <iostream>
void ConcreteObserver::update(std::string& state) {
	m_state = state;
	std::cout << std::format("Observer state has changed to {}\n", m_state);
}