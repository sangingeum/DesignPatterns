#include "ConcreteElement.hpp"

void ConcreteElementA::accept(Visitor& visitor) {
	visitor.handleA(*this);
}
float ConcreteElementA::getValue() {
	return m_value;
}


void ConcreteElementB::accept(Visitor& visitor) {
	visitor.handleB(*this);
}
std::pair<float, float> ConcreteElementB::getValue() {
	return { m_x, m_y };
}