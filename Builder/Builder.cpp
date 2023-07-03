#include "Builder.hpp"


void PotatochipBuilder::reset() {
	m_product.reset(new Product());
}
void PotatochipBuilder::setName() {
	m_product->attach("[Name: Potatochip]");
}
void PotatochipBuilder::setID() {
	m_product->attach("[ID: " + std::to_string(m_id) + "]");
}
void PotatochipBuilder::setFlavor(const std::string& str) {
	m_product->attach("[Flavor: " + str + "]");
}
void PotatochipBuilder::setCompany() {
	m_product->attach("[Company: Crunchy Co.]");
}
std::unique_ptr<Product> PotatochipBuilder::getResult() {
	m_id++;
	return std::move(m_product);
}


void IcecreamBuilder::reset() {
	m_product.reset(new Product());
}
void IcecreamBuilder::setName() {
	m_product->attach("[Name: Icecream]");
}
void IcecreamBuilder::setID() {
	m_product->attach("[ID: " + std::to_string(m_id) + "]");
}
void IcecreamBuilder::setFlavor(const std::string& str) {
	m_product->attach("[Flavor: " + str + "]");
}
void IcecreamBuilder::setCompany() {
	m_product->attach("[Company: SweetBomb Co.]");
}
std::unique_ptr<Product> IcecreamBuilder::getResult() {
	m_id++;
	return std::move(m_product);
}