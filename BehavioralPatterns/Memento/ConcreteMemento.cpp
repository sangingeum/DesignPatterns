#include "ConcreteMemento.hpp"

void ConcreteMemento::restore() {
	m_originator.applyMemento(*this);
}