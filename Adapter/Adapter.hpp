#pragma once
#include "Target.hpp"
#include "Adaptee.hpp"
#include <memory>
// inherit both Target and Adaptee
class ClassAdapter : public Target, private Adaptee // private inheritance for Adaptee
{
public:
	std::string	request() override;
};

// inherit only Target and have an Adaptee instance as an attribute
class ObjectAdapter : public Target
{
	std::unique_ptr<Adaptee> m_adaptee;
public:
	ObjectAdapter() : m_adaptee(std::make_unique<Adaptee>()){}
	std::string	request() override;
};
