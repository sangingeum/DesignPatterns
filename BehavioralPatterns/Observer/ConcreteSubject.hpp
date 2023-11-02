#pragma once
#include "Subject.hpp"
#include <string>
class ConcreteSubject : public Subject
{	
protected:
	std::string m_state{ "Normal" };
public:
	virtual void notify() override;
	virtual void addSubscriber(const std::shared_ptr<Observer>& observer) override;
	virtual void removeSubscriber(const std::vector<size_t>& indices) override;
	virtual void removeSubscriber(const std::shared_ptr<Observer>& observer) override;
	virtual std::string getState();
	virtual void setState(const std::string state);

};
