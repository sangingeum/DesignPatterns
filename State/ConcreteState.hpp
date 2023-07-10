#pragma once
#include "State.hpp"
#include "Context.hpp"

class ConcreteStateNormal : public State
{
public:
	virtual void move();
	virtual void talk();
};

class ConcreteStateCautious : public State
{
public:
	virtual void move();
	virtual void talk();
};

class ConcreteStateCombat : public State
{
public:
	virtual void move();
	virtual void talk();
};

