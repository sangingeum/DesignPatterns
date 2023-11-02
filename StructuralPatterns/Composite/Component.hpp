#pragma once
/*
Safety over uniformity implementation
*/
class Component
{
protected:
	size_t m_price{ 0 };
public:
	Component() = default;
	Component(size_t price) : m_price(price) {}
	~Component() = default;
	virtual size_t calculatePrice() const = 0;
};

