#include "Factory.hpp"

size_t Factory::getCount() {
	return m_produceCount;
}


Factory& FactoryA::instance() {
	static FactoryA fac;
	return fac;
}

std::unique_ptr<Product> FactoryA::createProduct() {
	m_produceCount++;
	return std::make_unique<ProductA>();
}

Factory& FactoryB::instance() {
	static FactoryB fac;
	return fac;
}

std::unique_ptr<Product> FactoryB::createProduct() {
	m_produceCount++;
	return std::make_unique<ProductB>();
}