#include "Prototype.hpp"

int main() {

	Client client;
	// adding and removing prototypes at runtime
	client.addPrototype(0, std::make_unique<ConcretePrototypeA>(1));
	client.addPrototype(1, std::make_unique<ConcretePrototypeA>(24));
	client.addPrototype(2, std::make_unique<ConcretePrototypeB>(15.5f));
	client.addPrototype(3, std::make_unique<ConcretePrototypeB>(423.3f));
	client.removePrototype(3);

	auto a = client.getPrototype(0);
	auto b = client.getPrototype(1);
	auto c = client.getPrototype(2);
	// auto d = client.getPrototype(3);  // out of range error
	auto e = a->clone();
	auto f = c->clone();


	a->whoAmI(); // A copy of prototype 0
	b->whoAmI(); // A copy of prototype 1
	c->whoAmI(); // A copy of prototype 2
	e->whoAmI(); // A copy of prototype 0
	f->whoAmI(); // A copy of prototype 2
	
	return 0;
}