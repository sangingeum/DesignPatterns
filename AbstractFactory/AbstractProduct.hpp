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
class ConcreteProductChairA : public AbstractProductChair
{
	std::string m_productName{ "ChairA" };
public:
	ConcreteProductChairA(size_t id) : AbstractProductChair(id) {}
	virtual void showInfo() override;
	virtual void sitOn() override;
};
class ConcreteProductChairB : public AbstractProductChair
{
	std::string m_productName{ "ChairB" };
public:
	ConcreteProductChairB(size_t id) : AbstractProductChair(id) {}
	virtual void showInfo() override;
	virtual void sitOn() override;
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
class ConcreteProductDeskA : public AbstractProductDesk
{
	std::string m_productName{ "DeskA" };
public:
	ConcreteProductDeskA(size_t id) : AbstractProductDesk(id) {}
	virtual void showInfo() override;
	virtual void put(const std::string& item) override;

};
class ConcreteProductDeskB : public AbstractProductDesk
{
	std::string m_productName{ "DeskB" };
public:
	ConcreteProductDeskB(size_t id) : AbstractProductDesk(id) {}
	virtual void showInfo() override;
	virtual void put(const std::string& item) override;
};

