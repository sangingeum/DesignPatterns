#pragma once
#include <string>
#include <iostream>
class Implementor
{
protected:
	std::string m_firstName{"Mush"}, m_lastName{"Ken"};
	std::string m_basicOperation1{"Walk"}, m_basicOperation2{"Run"};
public:
	Implementor() = default;
	Implementor(const std::string& firstName, const std::string& lastName)
		: m_firstName(firstName), m_lastName(lastName) {}
	virtual ~Implementor() = default;
	virtual void showFirstName();
	virtual void showLastName();
	virtual void showOperation() = 0;
};

