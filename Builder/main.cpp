#include "Director.hpp"

int main() {
	Director director{std::make_unique<PotatochipBuilder>()};
	auto product0 = director.construct();
	product0->print(); // [Name: Potatochip][ID: 0][Flavor: sweet][Company: Crunchy Co.]
	auto product1 = director.construct();
	product1->print(); // [Name: Potatochip][ID: 1][Flavor: sweet][Company: Crunchy Co.]
	director.setFlavor("spicy");
	auto product2 = director.construct();
	product2->print(); // [Name: Potatochip][ID: 2][Flavor: spicy][Company: Crunchy Co.]

	director.setBuilder(std::make_unique<IcecreamBuilder>());
	auto product3 = director.construct();
	product3->print(); // [Name: Icecream][ID: 0][Flavor: spicy][Company: SweetBomb Co.]
	director.setFlavor("salty");
	auto product4 = director.construct();
	product4->print(); // [Name: Icecream][ID: 1][Flavor: salty][Company: SweetBomb Co.]
	return 0;
}