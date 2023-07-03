#include "Prototype.hpp"

int main() {

	Client client;
	// adding and removing prototypes at runtime
	client.addPrototype(0, std::make_unique<ConcretePrototypeA>());
	client.addPrototype(1, std::make_unique<ConcretePrototypeA>(24));
	client.addPrototype(2, std::make_unique<ConcretePrototypeB>());
	client.addPrototype(3, std::make_unique<ConcretePrototypeB>(423.3f));
	client.removePrototype(3);

	auto a = client.getPrototype(0);
	auto b = client.getPrototype(1);
	auto c = client.getPrototype(2);
	// auto d = client.getPrototype(3);  // out of range error

	a->whoAmI();
	b->whoAmI();
	c->whoAmI();

	auto e = a->clone();
	e->whoAmI();
	auto f = c->clone();
	f->whoAmI();
	
	return 0;
}