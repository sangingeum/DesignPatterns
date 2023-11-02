#include "ConcreteState.hpp"
void ConcreteStateNormal::move() {
	std::cout << m_context->getName() << " walks.\n";
}
void ConcreteStateNormal::talk() {
	std::cout << m_context->getName() << " talks.\n";
}

void ConcreteStateCautious::move() {
	std::cout << m_context->getName() << " crawls.\n";
}
void ConcreteStateCautious::talk() {
	std::cout << m_context->getName() << " whispers.\n";
}

void ConcreteStateCombat::move() {
	std::cout << m_context->getName() << " runs.\n";
}
void ConcreteStateCombat::talk() {
	std::cout << m_context->getName() << " shouts.\n";
}