#pragma once
#include "Node.hpp"
#include <stack>

class Iterator
{	
protected:
	std::stack<std::shared_ptr<Node>> m_trace;
	std::shared_ptr<Node> m_curNode;
public:
	Iterator() = default;
	virtual ~Iterator() = default;
	virtual Iterator& next() = 0;
	virtual bool isOver() const = 0;
	virtual float& getValue() const = 0;
};

class InorderIterator : public Iterator
{	
	virtual void digLeft(const std::shared_ptr<Node>& node);
public:
	virtual ~InorderIterator() = default;
	InorderIterator(const std::shared_ptr<Node>& root);
	Iterator& next() override;
	virtual bool isOver() const override;
	virtual float& getValue() const override;
};


