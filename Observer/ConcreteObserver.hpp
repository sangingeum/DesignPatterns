#pragma once
#include "ConcreteSubject.hpp"
#include "Observer.hpp"
class ConcreteObserver : public Observer
{	
protected:
	std::shared_ptr<ConcreteSubject> m_subject;
	std::string m_state {};
public:
	ConcreteObserver(const std::shared_ptr<ConcreteSubject>& subject) : m_subject(subject) {}
	virtual void update() override;
};

