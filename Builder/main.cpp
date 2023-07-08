#include "Director.hpp"

int main() {
	// Director with a Potatochip builder
	Director director{std::make_unique<PotatochipBuilder>()};
	auto product0 = director.construct();
	auto product1 = director.construct();
	director.setFlavor("spicy");
	auto product2 = director.construct();
	product0->print(); // [Name: Potatochip][ID: 0][Flavor: sweet][Company: Crunchy Co.]
	product1->print(); // [Name: Potatochip][ID: 1][Flavor: sweet][Company: Crunchy Co.]
	product2->print(); // [Name: Potatochip][ID: 2][Flavor: spicy][Company: Crunchy Co.]

	// Set the builder to an Icecream builder
	director.setBuilder(std::make_unique<IcecreamBuilder>());
	auto product3 = director.construct();
	director.setFlavor("salty");
	auto product4 = director.construct();
	product3->print(); // [Name: Icecream][ID: 0][Flavor: spicy][Company: SweetBomb Co.]
	product4->print(); // [Name: Icecream][ID: 1][Flavor: salty][Company: SweetBomb Co.]
	return 0;
}