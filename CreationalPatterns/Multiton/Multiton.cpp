#include "Multiton.hpp"

std::unordered_map<size_t, std::shared_ptr<Multiton>> Multiton::m_instanceMap;

std::shared_ptr<Multiton> Multiton::instance(size_t id) {
	if (m_instanceMap.find(id) == m_instanceMap.end()) {
		m_instanceMap.emplace(id, std::shared_ptr<Multiton>(new Multiton(id)));
	}
	return m_instanceMap[id];
}

void Multiton::clear() {
	m_instanceMap.clear();
}
