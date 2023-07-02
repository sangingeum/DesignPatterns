#include "Multiton.hpp"

std::unordered_map<size_t, std::shared_ptr<Multiton>> Multiton::m_instanceMap;

std::shared_ptr<Multiton> Multiton::instance(size_t index) {
	if (m_instanceMap.find(index) == m_instanceMap.end()) {
		m_instanceMap.emplace(index, std::shared_ptr<Multiton>(new Multiton(index)));
	}
	return m_instanceMap[index];
}

void Multiton::clear() {
	m_instanceMap.clear();
}
