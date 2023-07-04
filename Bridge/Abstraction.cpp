#include "Abstraction.hpp"
void Abstraction::showName() {
	m_implementor.showFirstName();
	std::cout << " ";
	m_implementor.showLastName();
}
void Abstraction::showFeature() {
	m_implementor.showOperation();
}