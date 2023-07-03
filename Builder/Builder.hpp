#pragma once
#include "Product.hpp"
#include <memory>
class Builder // Abstract base builder 
{
protected:
	size_t m_id{ 0 };
	std::unique_ptr<Product> m_product;
public:
	virtual void reset() = 0;
	virtual void setName() = 0;
	virtual void setID() = 0;
	virtual void setFlavor(const std::string& str) = 0;
	virtual void setCompany() = 0;
	virtual std::unique_ptr<Product> getResult() = 0;
};


class PotatochipBuilder : public Builder
{
public:
	virtual void reset() override;
	virtual void setName() override;
	virtual void setID() override;
	virtual void setFlavor(const std::string& str) override;
	virtual void setCompany() override;
	virtual std::unique_ptr<Product> getResult() override;
};

class IcecreamBuilder : public Builder
{	
public:
	virtual void reset();
	virtual void setName();
	virtual void setID();
	virtual void setFlavor(const std::string& str);
	virtual void setCompany();
	virtual std::unique_ptr<Product> getResult();
};
