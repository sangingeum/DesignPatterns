#pragma once
#include "AbstractClass.hpp"
#include <iostream>
class ConcreteClassMath : public AbstractClass
{	
protected:
	virtual void preHook() override;
	virtual void introduceTopic() override;
	virtual void TeachTopic() override;
	virtual void giveAssignment() override;
	virtual void postHook() override;
};


class ConcreteClassPhysics: public AbstractClass
{
protected:
	virtual void preHook() override;
	virtual void introduceTopic() override;
	virtual void TeachTopic() override;
	virtual void giveAssignment() override;
};


