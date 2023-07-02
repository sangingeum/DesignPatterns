#pragma once
#include "AbstractProduct.hpp"
#include <memory>

/*
Singleton Abstract Factory
Use ::instance() to get the instance
ConcreteFactoryA - chairA, deskA
ConcreteFactoryB - chairB, deskB
*/

class AbstractFactory
{
protected:
	AbstractFactory() = default;
	AbstractFactory(const AbstractFactory&) = delete;
	void operator=(const AbstractFactory&) = delete;
	virtual ~AbstractFactory() = default;
public:
	virtual std::unique_ptr<AbstractProductChair> createChair(size_t id) = 0;
	virtual std::unique_ptr<AbstractProductDesk> createDesk(size_t id) = 0;
	static AbstractFactory& instance() {} // do not call this
};

