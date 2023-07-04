#pragma once
#include "Implementor.hpp"
#include <iostream>
class ConcreteImplementorA : public Implementor
{
protected:
	std::string m_advancedOperation{"Fly"};
public:
	ConcreteImplementorA() : Implementor("James", "Smith") {}
	virtual void showOperation() override;
};

class ConcreteImplementorB : public Implementor
{
protected:
	std::string m_advancedOperation{"Swim"};
public:
	ConcreteImplementorB() : Implementor("Linda", "Taylor") {}
	virtual void showOperation() override;
};

