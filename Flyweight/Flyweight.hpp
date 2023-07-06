#pragma once
#include <string>
class Flyweight
{	
public:
	const std::string m_color{ "black" };
	const std::string m_texture {">>==>"};
	const std::string m_name {"arrow"};
	Flyweight(const std::string& color, const std::string& texture,
		const std::string& name) : m_color(color), m_texture(texture),
		m_name(name) {}

};

