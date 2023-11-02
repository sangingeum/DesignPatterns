#pragma once
#include <string>
#include "Implementor.hpp"
class Abstraction
{
protected:
	Implementor& m_implementor;
public:
	Abstraction(Implementor& implementor)
		: m_implementor(implementor){}
	~Abstraction() = default;
	virtual void showName();
	virtual	void showFeature();
};

