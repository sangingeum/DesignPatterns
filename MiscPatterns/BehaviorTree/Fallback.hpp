#pragma once
#include "ControlFlowNode.hpp"


class Fallback : public ControlFlowNode
{
public:
	State tick() override {
		if (m_children.empty())
			return State::Success;
		switch (m_children[m_curIndex]->tick())
		{
		case State::Running:
			return State::Running;
		case State::Success:
			clear();
			return State::Success;
		case State::Failure:
			++m_curIndex;
			if (m_curIndex >= m_children.size()) {
				clear();
				return State::Failure;
			}
			else
				return State::Running;
		}
	}
};

