#pragma once
#include "Element.hpp"
#include "Visitor.hpp"
#include <utility>
class ConcreteElementA : public Element
{	
	float m_value{};
public:
	ConcreteElementA(float value) : m_value(value){}
	void accept(Visitor& visitor) override;
	float getValue();
};

class ConcreteElementB : public Element
{
	float m_x{}, m_y{};
public:
	ConcreteElementB(float x, float y) : m_x(x), m_y(y) {}
	void accept(Visitor& visitor) override;
	std::pair<float, float> getValue();
};
