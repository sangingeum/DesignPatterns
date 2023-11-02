#pragma once
#include <string>
class Component;
class Mediator
{
public:
	Mediator() = default;
	virtual ~Mediator() = default;
	virtual void notify(Component& component, const std::string& type) = 0;
};


