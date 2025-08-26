#pragma once
#include "Observer.hpp"
class ConcreteObserver : public Observer
{	
protected:
	std::string m_state{};
public:
	virtual void update(std::string& state) override;
};

