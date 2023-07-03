#include "Factory.hpp"

int main() {
	auto& facA = FactoryA::instance(); // Factory& type
	auto& facB = FactoryB::instance(); // Factory& type
	auto productA = facA.createProduct(); // std::unique_ptr<Product> type
	auto productB = facB.createProduct(); // std::unique_ptr<Product> type
	productA->print(); 
	productB->print();
	facA.createProduct();
	facA.createProduct();
	facA.createProduct();
	std::cout << "facA produced " << facA.getCount() << " products\n"; // 4
	std::cout << "facB produced " << facB.getCount() << " products\n"; // 1

	return 0;
}