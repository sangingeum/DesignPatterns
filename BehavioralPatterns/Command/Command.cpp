#include "Command.hpp"
#include <iostream>
void ConcreteCommand1::execute() {
	std::cout << "ConcreteCommand1::execute() called\n";
}

void ConcreteCommand2::execute() {
	m_receiver.operation(m_param);
}

void ConcreteCommand3::execute() {
	m_receiver.operation();
}