#pragma once
#include "Abstraction.hpp"
class RedefinedAbstractionA : public Abstraction
{
public:
	RedefinedAbstractionA(Implementor& implementor)
		: Abstraction(implementor) {}
	virtual void introduce();
};


class RedefinedAbstractionB : public Abstraction
{
public:
	RedefinedAbstractionB(Implementor& implementor)
		: Abstraction(implementor) {}
	virtual void exercise();
};
