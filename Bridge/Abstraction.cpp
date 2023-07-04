#include "Abstraction.hpp"
void Implementor::showFirstName() {
	std::cout << m_firstName;
}
void Implementor::showLastName() {
	std::cout << m_lastName;
}