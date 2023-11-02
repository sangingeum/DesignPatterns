#pragma once
#include "FlyweightFactory.hpp"

class MovingObject
{	
	float m_xPos{}, m_yPos{};
	float m_xVel{}, m_yVel{};
	std::shared_ptr<Flyweight> m_flyweight;
public:
	MovingObject(float xPos, float yPos, float xVel, float yVel,
		const std::string& color, const std::string& texture, const std::string& name)
		: m_xPos(xPos), m_yPos(yPos), m_xVel(xVel), m_yVel(yVel){
		auto& fac = FlyweightFactory::instance();
		m_flyweight = fac.lookup(color, texture, name);
	}
	void update();
	void render();
};

