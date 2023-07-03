#include "Factory.hpp"


Factory& FactoryA::instance() {
	static FactoryA fac;
	return fac;
}

std::unique_ptr<Product> FactoryA::createProduct() {
	return std::make_unique<ProductA>();
}

Factory& FactoryB::instance() {
	static FactoryB fac;
	return fac;
}

std::unique_ptr<Product> FactoryB::createProduct() {
	return std::make_unique<ProductB>();
}