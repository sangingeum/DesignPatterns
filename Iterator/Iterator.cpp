#include "Iterator.hpp"

void InorderIterator::digLeft(const std::shared_ptr<Node>& node) {
	auto cur = node;
	while (cur) {
		m_trace.push(cur);
		cur = cur->left;
	}
}

InorderIterator::InorderIterator(const std::shared_ptr<Node>& root) {
	digLeft(root);
	m_curNode = m_trace.top();
}
Iterator& InorderIterator::next() {
	auto cur = m_trace.top()->right;
	m_trace.pop();
	if (cur) {
		digLeft(cur);
	}
	if (!isOver()) {
		m_curNode = m_trace.top();
	}
	return *this;
}
bool InorderIterator::isOver() const {
	return m_trace.empty();
}
float& InorderIterator::getValue() const {
	return m_curNode->num;
}