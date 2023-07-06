#include "FlyweightFactory.hpp"
std::unordered_map<std::string, std::shared_ptr<Flyweight>> FlyweightFactory::m_FlyweightMap;

FlyweightFactory& FlyweightFactory::instance() {
	static FlyweightFactory fac;
	return fac;
}
std::shared_ptr<Flyweight> FlyweightFactory::lookup(
	const std::string& color, const std::string& texture,
	const std::string& name) {
	std::string key = color + texture + name;
	if (m_FlyweightMap.find(key) == m_FlyweightMap.end()) {
		m_FlyweightMap.emplace(key, std::make_shared<Flyweight>(color, texture, name));
	}
	return m_FlyweightMap[key];
}

size_t FlyweightFactory::getSize() {
	return m_FlyweightMap.size();
}