#include "AbstractProduct.hpp"


void ConcreteProductChairA::showInfo() {
	std::cout << std::format("ConcreteProductChairA, id {}, productName {}\n", m_id, m_productName);
}
void ConcreteProductChairA::sitOn() {
	std::cout << std::format("You sat on a {}\n", m_productName);
}

void ConcreteProductChairB::showInfo() {
	std::cout << std::format("ConcreteProductChairB, id {}, productName {}\n", m_id, m_productName);
}
void ConcreteProductChairB::sitOn() {
	std::cout << std::format("You sat on a {}\n", m_productName);
}


void ConcreteProductDeskA::showInfo() {
	std::cout << std::format("ConcreteProductDeskA, id {}, productName {}\n", m_id, m_productName);
}
void ConcreteProductDeskA::put(const std::string& item) {
	std::cout << std::format("You put a {} on the {}\n", item, m_productName);
}

void ConcreteProductDeskB::showInfo() {
	std::cout << std::format("ConcreteProductDeskB, id {}, productName {}\n", m_id, m_productName);
}
void ConcreteProductDeskB::put(const std::string& item) {
	std::cout << std::format("You put a {} on the {}\n", item, m_productName);
}