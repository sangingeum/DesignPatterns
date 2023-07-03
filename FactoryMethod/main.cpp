#include "Factory.hpp"

int main() {
	auto& facA = FactoryA::instance(); // Factory& type
	auto& facB = FactoryB::instance(); // Factory& type
	auto productA = facA.createProduct(); // std::unique_ptr<Product> type
	auto productB = facB.createProduct(); // std::unique_ptr<Product> type
	productA->print();
	productB->print();
	return 0;
}