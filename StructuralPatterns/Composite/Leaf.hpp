#pragma once
#include "Component.hpp"
class Leaf : public Component
{
public:
	Leaf() = default;
	Leaf(size_t price) : Component(price) {}
	virtual size_t calculatePrice() const override;
};

