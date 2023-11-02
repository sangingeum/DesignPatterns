#pragma once
#include <memory>
#include "Component.hpp"
// Abstract Decorator
class Decorator : public Component
{
protected:
	std::unique_ptr<Component> m_component;
public:
	Decorator(std::unique_ptr<Component>&& component) : m_component(std::move(component)) {}
};


// Concrete Decorators
class DecoratorParenthesis : public Decorator
{
public:
	DecoratorParenthesis(std::unique_ptr<Component>&& component) : Decorator(std::move(component)) {}
	virtual	std::string getContent() override;
};

class DecoratorBracket : public Decorator
{
public:
	DecoratorBracket(std::unique_ptr<Component>&& component) : Decorator(std::move(component)) {}
	virtual	std::string getContent() override;
};

class DecoratorDash : public Decorator
{
public:
	DecoratorDash(std::unique_ptr<Component>&& component) : Decorator(std::move(component)) {}
	virtual	std::string getContent() override;
};
