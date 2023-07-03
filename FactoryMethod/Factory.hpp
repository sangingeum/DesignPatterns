#pragma once
#include "Product.hpp"
#include <memory>

/*
Singleton factory method
Use ::instance to get the instance
FactoryA produces ProductA
FactoryB produces ProductB
*/

class Factory
{
protected:
	size_t m_produceCount = 0;
	Factory() = default;
	Factory(const Factory&) = delete; // delete copy constructor
	void operator=(const Factory&) = delete; // delete assignment operator
	virtual ~Factory() = default;
public:
	static Factory& instance() {}
	virtual std::unique_ptr<Product> createProduct() = 0;
};

class FactoryA : Factory
{	
protected:
	FactoryA() = default;
	FactoryA(const FactoryA&) = delete; // delete copy constructor
	void operator=(const FactoryA&) = delete; // delete assignment operator
	~FactoryA() = default;
public:
	static Factory& instance();
	virtual std::unique_ptr<Product> createProduct() override;
};

class FactoryB : Factory
{
protected:
	FactoryB() = default;
	FactoryB(const FactoryB&) = delete; // delete copy constructor
	void operator=(const FactoryB&) = delete; // delete assignment operator
	~FactoryB() = default;
public:
	static Factory& instance();
	virtual std::unique_ptr<Product> createProduct() override;
};