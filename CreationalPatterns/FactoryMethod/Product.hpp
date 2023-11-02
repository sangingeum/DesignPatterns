#pragma once
#include <iostream>
class Product
{
public:
	Product() = default;
	virtual ~Product() = default;
	virtual void print() = 0;
};

class ProductA : public Product
{
public:
	ProductA() = default;
	virtual void print() override;
};

class ProductB : public Product
{
public:
	ProductB() = default;
	virtual void print() override;
};

