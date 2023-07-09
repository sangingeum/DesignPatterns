#pragma once
#include "Observer.hpp"
#include <vector>
#include <memory>
class Subject
{	
protected:
	std::vector<std::weak_ptr<Observer>> m_observers;
public:
	virtual ~Subject() = default;
	virtual void notify() = 0;
	virtual void addSubscriber(const std::shared_ptr<Observer>& observer) = 0;
	virtual void removeSubscriber(const std::vector<size_t>& indices) = 0;
	virtual void removeSubscriber(const std::shared_ptr<Observer>& observer) = 0;
};





