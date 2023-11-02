#pragma once
#include "Flyweight.hpp"
#include <unordered_map>
#include <memory>
class FlyweightFactory
{
	FlyweightFactory() = default;
	FlyweightFactory(const FlyweightFactory&) = delete;
	void operator=(const FlyweightFactory&) = delete;
	~FlyweightFactory() = default;
	static std::unordered_map<std::string, std::shared_ptr<Flyweight>> m_FlyweightMap;
public:
	static FlyweightFactory& instance();
	std::shared_ptr<Flyweight> lookup(const std::string& color, 
		const std::string& texture, const std::string& name);
	size_t getSize();
};

