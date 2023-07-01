#include "Multiton.hpp"
std::unordered_map<size_t, Multiton*> Multiton::m_instanceMap;

Multiton* Multiton::instance(size_t index) {
	if (m_instanceMap.find(index) == m_instanceMap.end()) {
		m_instanceMap[index] = new Multiton(index);
	}
	return m_instanceMap[index];
}

void Multiton::clear() {
	for (auto [_, ptr] : m_instanceMap) {
		delete ptr;
	}
	m_instanceMap.clear();
}