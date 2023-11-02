#include "Factory.hpp"

int main() {
	// Get FactoryA and FactoryB instances
	auto& facA = FactoryA::instance(); // Factory& type
	auto& facB = FactoryB::instance(); // Factory& type

	// Create productA and productB
	auto productA = facA.createProduct(); // std::unique_ptr<Product> type
	auto productB = facB.createProduct(); // std::unique_ptr<Product> type

	// Print products
	productA->print(); 
	productB->print();

	// Create 3 additional products from facA
	facA.createProduct();
	facA.createProduct();
	facA.createProduct();

	// Print factory counters
	std::cout << "facA produced " << facA.getCount() << " products\n"; // 4
	std::cout << "facB produced " << facB.getCount() << " products\n"; // 1

	return 0;
}