#include "Context.hpp"
void Context::traverse(const std::vector<int>& arr) {
	m_strategy->traverse(arr);
}
void Context::setStrategy(std::unique_ptr<Strategy>&& strategy) {
	m_strategy = std::move(strategy);
}