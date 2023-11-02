#pragma once
#include <memory>
#include <string>
#include "State.hpp"
class Context
{	
	std::unique_ptr<State> m_state{};
	std::string m_name{};
public:
	Context(const std::string& name) : m_name(name){}
	void move();
	void talk();
	void setState(std::unique_ptr<State>&& state);
	const std::string& getName();
};

