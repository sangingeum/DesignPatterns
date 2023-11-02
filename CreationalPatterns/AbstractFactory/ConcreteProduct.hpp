#pragma once
#include "AbstractProduct.hpp"

//Chair
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

//Desk
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

