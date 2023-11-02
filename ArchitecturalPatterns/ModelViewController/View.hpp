#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Model.hpp"

class View
{
private:
	Model& m_model;
	std::string m_str{};
	uint32_t m_counter{ 0 };
public:
	View(Model& model)
		: m_model(model)
	{}
	void update() {
		m_str = m_model.getString();
		m_counter = m_model.getCounter();
	}
	void display() const {
		std::cout << "View string: " << m_str << "\n";
		std::cout << "View counter: " << m_counter << "\n";
	}
};

