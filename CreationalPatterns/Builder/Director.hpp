#pragma once
#include "Builder.hpp"
class Director
{		
	std::unique_ptr<Builder> m_builder;
	std::string m_flavor {"sweet"};
public:
	Director(std::unique_ptr<Builder>&& builder);
	void setBuilder(std::unique_ptr<Builder>&& builder);
	void setFlavor(const std::string flavor);
	std::unique_ptr<Product> construct();
};

