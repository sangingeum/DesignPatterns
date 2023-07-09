#pragma once
#include "Memento.hpp"
#include <stack>
#include <memory>

class Caretaker
{
	std::stack<std::shared_ptr<Memento>> m_history;
public:
	void push(const std::shared_ptr<Memento>& memento);
	void undo();
};

