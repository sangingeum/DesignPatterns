#include "ConcreteSubject.hpp"
#include <format>
#include <iostream>
void ConcreteSubject::notify() {
	std::vector<size_t> toRemove;
	size_t size = m_observers.size();
	for (size_t i = 0; i < size; ++i) {
		if (auto sharedObserver = m_observers[i].lock()) {
			sharedObserver->update();
		}
		else {
			toRemove.push_back(i);
		}
	}
	removeSubscriber(toRemove);
}
void ConcreteSubject::addSubscriber(const std::shared_ptr<Observer>& observer) {
	m_observers.push_back(observer);
}
void ConcreteSubject::removeSubscriber(const std::vector<size_t>& indices) {
	for (auto index : indices) {
		m_observers.erase(m_observers.begin() + index);
	}
}
void ConcreteSubject::removeSubscriber(const std::shared_ptr<Observer>& observer) {
	for (auto it = m_observers.begin(); it != m_observers.end(); ++it) {
		if ((*it).lock() == observer) {
			m_observers.erase(it);
			break;
		}
	}
}
std::string ConcreteSubject::getState() {
	return m_state;
}
void ConcreteSubject::setState(const std::string state) {
	std::cout << std::format("Subject state has changed from {} to {}\n", m_state, state);
	m_state = state;
	notify();
}