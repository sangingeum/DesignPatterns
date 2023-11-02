#pragma once
#include <string>
// Abstract Component
class Component
{
protected:
	std::string m_content{"|Content|"};
public:
	Component() = default;
	virtual	std::string getContent() = 0;
};

// Concrete Component
class ConcreteComponent : public Component
{
public:
	ConcreteComponent() = default;
	virtual	std::string getContent() override;
};

