#pragma once
#include <iostream>
#include <format>
#include <string>

// Chairs
class AbstractProductChair
{
protected:
	size_t m_id{ 0 };
public:
	AbstractProductChair(size_t id) : m_id(id) {}
	virtual void showInfo() = 0;
	virtual void sitOn() = 0;
};


//Desks
class AbstractProductDesk
{
protected:
	size_t m_id{ 0 };
public:
	AbstractProductDesk(size_t id) : m_id(id) {}
	virtual void showInfo() = 0;
	virtual void put(const std::string& item) = 0;
};
