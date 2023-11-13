#pragma once
#include "ControlFlowNode.hpp"
#include <memory>

// Inverter Decorator
class Decorator : public Node
{
protected:
	std::unique_ptr<Node> child;
public:
	Decorator(std::unique_ptr<Node>&& child_)
		:child(std::move(child_))
	{}
	State tick() {
		switch (child->tick())
		{
		case State::Running:
			return State::Running;
		case State::Success:
			return State::Failure;
		case State::Failure:
			return State::Success;
		}
	}
	void clear() {}

};

