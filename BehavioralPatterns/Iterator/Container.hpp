#pragma once
#include <memory>
#include "Node.hpp"
#include "Iterator.hpp"

class Container // Binary Tree Container
{
	std::shared_ptr<Node> m_root;
public:
	Container() : m_root(std::make_shared<Node>(0)){}
	std::shared_ptr<Node> getRoot();
	std::unique_ptr<Iterator> InorderBegin();
};

