#pragma once
#include <iostream>
#include <string>
class Target
{
public:
	Target() = default;
	virtual ~Target() = default;
	virtual std::string request() = 0;
};


class ConcreteTarget : public Target
{
public:
	ConcreteTarget() = default;
	virtual std::string request() override;
};

