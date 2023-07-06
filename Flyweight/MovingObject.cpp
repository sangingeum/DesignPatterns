#include "MovingObject.hpp"
#include <iostream>
#include <format>
void MovingObject::update() {
	m_xPos += m_xVel;
	m_yPos += m_yVel;
}
void MovingObject::render() {
	std::cout << std::format("[X:{},Y:{} {} {} {}]\n", m_xPos, m_yPos,
		m_flyweight->m_color, m_flyweight->m_name, m_flyweight->m_texture);
}