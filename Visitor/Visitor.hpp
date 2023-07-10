#pragma once
class ConcreteElementA;
class ConcreteElementB;
class Visitor
{
public:
	virtual ~Visitor() = default;
	virtual void handleA(ConcreteElementA& element) = 0;
	virtual void handleB(ConcreteElementB& element) = 0;
	virtual float reset() = 0;
};

