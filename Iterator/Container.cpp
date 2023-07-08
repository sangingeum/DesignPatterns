#include "Container.hpp"

std::shared_ptr<Node> Container::getRoot() {
	return m_root;
}
std::unique_ptr<Iterator> Container::InorderBegin() {
	return std::make_unique<InorderIterator>(m_root);
}
