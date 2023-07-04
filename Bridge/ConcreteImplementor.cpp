#include "ConcreteImplementor.hpp"


void ConcreteImplementorA::showOperation() {
	std::cout << "[" << m_basicOperation1 << " & " <<
		m_basicOperation2 << " & " << m_advancedOperation << "]";
}
void ConcreteImplementorB::showOperation() {
	std::cout << "[" << m_basicOperation1 << " & " <<
		m_basicOperation2 << " & " << m_advancedOperation1 
		<< " & " << m_advancedOperation2 << "]";
}
