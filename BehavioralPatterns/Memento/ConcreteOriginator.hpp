#pragma once
#include "Originator.hpp"
#include "ConcreteMemento.hpp"
class ConcreteOriginator : public Originator {
	char m_status{'A'};
	float m_x{}, m_y{};
public:
	virtual std::shared_ptr<Memento> createMemento() override;
	virtual void applyMemento(const Memento& memento) override;
	void updateStatus();
	void showStatus();
};
