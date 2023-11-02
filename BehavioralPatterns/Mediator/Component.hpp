#pragma once
#include "Mediator.hpp"
#include <memory>
class Component
{
protected:
	std::shared_ptr<Mediator> m_mediator;
public:
	virtual ~Component() = default;
	void setMediator(const std::shared_ptr<Mediator>& mediator);
};

class ConcreteComponent1 : public Component
{
public:
	void TriggerA();
	void TriggerB();
};

class ConcreteComponent2 : public Component
{
public:
	void TriggerC();
	void TriggerD();
};

