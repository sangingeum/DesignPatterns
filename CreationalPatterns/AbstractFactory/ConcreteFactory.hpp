#pragma once
#include "AbstractFactory.hpp"
#include "ConcreteProduct.hpp"

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
