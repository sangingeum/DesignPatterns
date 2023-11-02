#pragma once
#include "Memento.hpp"
#include "Originator.hpp"
#include <string>
class ConcreteMemento : public Memento
{	
	friend class ConcreteOriginator;
	char m_status{};
	float m_x{}, m_y{};
	ConcreteMemento(Originator& originator,
		char status, float x, float y
	)
		: Memento(originator), m_status(status), m_x(x), m_y(y) {}
public:
	virtual ~ConcreteMemento() = default;
	virtual void restore();
};

