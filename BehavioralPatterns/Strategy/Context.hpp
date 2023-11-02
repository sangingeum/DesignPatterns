#pragma once
#include "Strategy.hpp"
#include <memory>
#include <vector>
class Context
{
	std::unique_ptr<Strategy> m_strategy;
public:
	Context() : m_strategy(std::make_unique<ConcreteStrategyBasic>()) {}
	void traverse(const std::vector<int>& arr);
	void setStrategy(std::unique_ptr<Strategy>&& strategy);
};

