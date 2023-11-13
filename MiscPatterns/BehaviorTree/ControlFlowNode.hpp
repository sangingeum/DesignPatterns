#pragma once
#include "Node.hpp"
#include <memory>
#include <vector>

class ControlFlowNode : public Node
{
protected:
	std::vector<std::unique_ptr<Node>> m_children;
	uint32_t m_success{ 0 };
	uint32_t m_failure{ 0 };
	uint32_t m_curIndex{ 0 };
public:
	void addChild(std::unique_ptr<Node>&& child) {
		m_children.emplace_back(std::move(child));
	}
	void clear() override {
		m_success = 0;
		m_failure = 0;
		m_curIndex = 0;
	}
};

