#pragma once
#include "Mediator.hpp"
#include "Component.hpp"
#include <memory>

class ConcreteMediator : public Mediator
{
	std::shared_ptr<ConcreteComponent1> m_comp1;
	std::shared_ptr<ConcreteComponent2> m_comp2;
public:
	ConcreteMediator(const std::shared_ptr<ConcreteComponent1>& m_comp1, const std::shared_ptr<ConcreteComponent2>& m_comp2);
	virtual void notify(Component& component, const std::string& type) override;
};
