#pragma once
#include "Memento.hpp"
#include <memory>
class Originator
{	
public:
	virtual ~Originator() = default;
	virtual std::shared_ptr<Memento> createMemento() = 0;
	virtual void applyMemento(const Memento& memento) = 0;
};


