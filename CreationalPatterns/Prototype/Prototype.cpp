#include "Prototype.hpp"
std::unordered_map<size_t, std::unique_ptr<Prototype>> Client::m_prototypeMap;

void Prototype::whoAmI() { std::cout << "I'm Prototype\n"; }

void ConcretePrototypeA::whoAmI() {
	std::cout << std::format("I'm ConcretePrototypeA with age {}\n", m_age); 
}
std::unique_ptr<Prototype> ConcretePrototypeA::clone() {
	return std::make_unique<ConcretePrototypeA>(*this);
}


void ConcretePrototypeB::whoAmI() {
	std::cout << std::format("I'm ConcretePrototypeB with value {}\n", m_value); 
}
std::unique_ptr<Prototype> ConcretePrototypeB::clone() {
	return std::make_unique<ConcretePrototypeB>(*this);
}


void Client::addPrototype(size_t index, std::unique_ptr<Prototype>&& prototype) {
	m_prototypeMap.emplace(index, std::move(prototype));
}
void Client::removePrototype(size_t index) {
	m_prototypeMap.erase(index);
}
std::unique_ptr<Prototype> Client::getPrototype(size_t index) {
	return m_prototypeMap.at(index)->clone();
}