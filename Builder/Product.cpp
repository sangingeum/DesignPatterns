#include "Product.hpp"
void Product::attach(const std::string& str) {
	m_productString += str;
}
void Product::print() {
	std::cout << m_productString << "\n";
}