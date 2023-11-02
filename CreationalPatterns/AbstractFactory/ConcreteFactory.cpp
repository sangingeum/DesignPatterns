#include "ConcreteFactory.hpp"


std::unique_ptr<AbstractProductChair> ConcreteFactoryA::createChair(size_t id) {
	return std::make_unique<ConcreteProductChairA>(id);
}
std::unique_ptr<AbstractProductDesk> ConcreteFactoryA::createDesk(size_t id) {
	return std::make_unique<ConcreteProductDeskA>(id);
}
AbstractFactory& ConcreteFactoryA::instance() {
	static ConcreteFactoryA fac;
	return fac;
}

std::unique_ptr<AbstractProductChair> ConcreteFactoryB::createChair(size_t id) {
	return std::make_unique<ConcreteProductChairB>(id);
}
std::unique_ptr<AbstractProductDesk> ConcreteFactoryB::createDesk(size_t id) {
	return std::make_unique<ConcreteProductDeskB>(id);
}
AbstractFactory& ConcreteFactoryB::instance() {
	static ConcreteFactoryB fac;
	return fac;
}