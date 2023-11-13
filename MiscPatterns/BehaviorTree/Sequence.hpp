#pragma once
#include "ControlFlowNode.hpp"
class Sequence : public ControlFlowNode
{
private:

public:
	State tick() override {
		if (m_children.empty())
			return State::Success;
		switch (m_children[m_curIndex]->tick())
		{
		case State::Running:
			return State::Running;
		case State::Success:
			++m_curIndex;
			if (m_curIndex >= m_children.size()) {
				clear();
				return State::Success;
			}
			return State::Running;
		case State::Failure:
			clear();
			return State::Failure;
		}
	}
};

