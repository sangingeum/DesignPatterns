#pragma once
#include <memory>
#include <iostream>
#include <unordered_map>
#include <format>
class Prototype
{
public:
	Prototype() = default;
	virtual ~Prototype() = default;
	virtual void whoAmI();
	virtual std::unique_ptr<Prototype> clone() = 0;
};

class ConcretePrototypeA : public Prototype
{
	size_t m_age{ 0 };
public:
	ConcretePrototypeA() = default;
	ConcretePrototypeA(size_t age) : m_age(age) {}
	~ConcretePrototypeA() = default;
	void whoAmI() override;
	std::unique_ptr<Prototype> clone() override;
};

class ConcretePrototypeB : public Prototype
{
	float m_value{ 1.5f };
public:
	ConcretePrototypeB() = default;
	ConcretePrototypeB(float value) : m_value(value) {}
	void whoAmI() override;
	std::unique_ptr<Prototype> clone() override;
};

class Client {
	/*Prototype Factory*/
	static std::unordered_map<size_t, std::unique_ptr<Prototype>> m_prototypeMap;
public:
	void addPrototype(size_t index, std::unique_ptr<Prototype>&& prototype);
	void removePrototype(size_t index);
	std::unique_ptr<Prototype> getPrototype(size_t index);

};
