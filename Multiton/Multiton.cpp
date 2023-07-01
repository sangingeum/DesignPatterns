#include "Multiton.hpp"
std::vector<Target*> Multiton::m_toDelete;
std::unordered_map<size_t, Target*> Multiton::m_instanceMap;


Target* Multiton::instance(size_t index) {

	if (m_instanceMap.find(index) == m_instanceMap.end()) {
		Target* newObj = new Target(index);
		m_toDelete.push_back(newObj);
		m_instanceMap[index] = newObj;
	}
	return m_instanceMap[index];
}

void Multiton::clear() {
	for (auto item : m_toDelete) {
		delete item;
	}
	m_toDelete.clear();
	m_instanceMap.clear();
}