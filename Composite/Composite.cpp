#include "Composite.hpp"
size_t Composite::calculatePrice() const {
	size_t totalPrice = m_price;
	for (const auto& child : m_children) {
		totalPrice += child->calculatePrice();
	}
	return totalPrice;
}
void Composite::addChild(const std::shared_ptr<Component>& child) {
	m_children.push_back(child);
}
void Composite::removeChild(const std::shared_ptr<Component>& child) {
	for (auto it = m_children.begin(); it != m_children.end(); ++it) {
		if (it->get() == child.get()) {
			m_children.erase(it);
			break;
		}
	}
}
