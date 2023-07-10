#include "ConcreteVisitor.hpp"

void ConcreteVisitorAdd::handleA(ConcreteElementA& element) {
	m_sum += element.getValue();
}
void ConcreteVisitorAdd::handleB(ConcreteElementB& element) {
	auto [x, y] = element.getValue();
	m_sum += x;
	m_sum += y;
}
float ConcreteVisitorAdd::reset() {
	float temp = m_sum;
	m_sum = 0;
	return temp;
}


void ConcreteVisitorMultiply::handleA(ConcreteElementA& element) {
	m_mul *= element.getValue();
}
void ConcreteVisitorMultiply::handleB(ConcreteElementB& element) {
	auto [x, y] = element.getValue();
	m_mul *= x;
	m_mul *= y;
}
float ConcreteVisitorMultiply::reset() {
	float temp = m_mul;
	m_mul = 1;
	return temp;
}