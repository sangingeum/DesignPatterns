#pragma once
#include "Node.hpp"
#include <functional>

class Leaf : public Node
{
protected:
	std::function<State()> m_functor{ []() { return State::Success; } };
public:
	Leaf() = default;
	Leaf(std::function<State()> functor)
		: m_functor(std::move(functor))
	{}
	State tick() override {
		return m_functor();
	}
	void clear() override {

	}
	inline void setFunctor(std::function<State()> functor) {
		m_functor = std::move(functor);
	}
};

