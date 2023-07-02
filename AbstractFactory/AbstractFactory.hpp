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

class ConcreteFactoryA : public AbstractFactory {
protected:
	ConcreteFactoryA() = default;
	ConcreteFactoryA(const ConcreteFactoryA&) = delete;
	void operator=(const ConcreteFactoryA&) = delete;
	virtual ~ConcreteFactoryA() = default;
public:
	virtual std::unique_ptr<AbstractProductChair> createChair(size_t id) override;
	virtual std::unique_ptr<AbstractProductDesk> createDesk(size_t id) override;
	static AbstractFactory& instance();
};

class ConcreteFactoryB : public AbstractFactory {
protected:
	ConcreteFactoryB() = default;
	ConcreteFactoryB(const ConcreteFactoryB&) = delete;
	void operator=(const ConcreteFactoryB&) = delete;
	virtual ~ConcreteFactoryB() = default;
public:
	virtual std::unique_ptr<AbstractProductChair> createChair(size_t id) override;
	virtual std::unique_ptr<AbstractProductDesk> createDesk(size_t id) override;
	static AbstractFactory& instance();
};
