#pragma once
#include "Visitor.hpp"
#include "ConcreteElement.hpp"
class ConcreteVisitorAdd : public Visitor
{	
	float m_sum{};
public:
	void handleA(ConcreteElementA& element) override;
	void handleB(ConcreteElementB& element) override;
	float reset() override;
};

class ConcreteVisitorMultiply : public Visitor
{	
	float m_mul{1};
	public:
	void handleA(ConcreteElementA& element) override;
	void handleB(ConcreteElementB& element) override;
	float reset() override;
};

