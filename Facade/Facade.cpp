#include "Facade.hpp"

std::string Facade::createRegularBurger() {
	std::string burger{""};
	burger = m_systemA.addBread(burger);
	burger = m_systemC.addVegetable(burger);
	burger = m_systemD.addSauce(burger);
	burger = m_systemB.addPatty(burger);
	burger = m_systemA.addBread(burger);
	return burger;
}

std::string Facade::createDoublePattyBurger() {
	std::string burger{""};
	burger = m_systemA.addBread(burger);
	burger = m_systemB.addPatty(burger);
	burger = m_systemC.addVegetable(burger);
	burger = m_systemD.addSauce(burger);
	burger = m_systemB.addPatty(burger);
	burger = m_systemA.addBread(burger);
	return burger;
}