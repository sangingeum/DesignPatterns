#pragma once
#include <string>
#include <iostream>
class Product
{
	std::string m_productString {""};
public:
	void attach(const std::string& str);
	void print();
};

