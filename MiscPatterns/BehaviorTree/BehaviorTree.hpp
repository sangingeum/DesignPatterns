#pragma once
#include "Node.hpp"
#include <memory>

class BehaviorTree
{
protected:
	std::unique_ptr<Node> m_root;
public:
	BehaviorTree(std::unique_ptr<Node>&& root)
		: m_root(std::move(root))
	{}

	Node::State tick() {
		return m_root->tick();
	}
};

