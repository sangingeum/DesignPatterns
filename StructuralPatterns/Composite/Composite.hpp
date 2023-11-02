#pragma once
#include "Component.hpp"
#include <vector>
#include <memory>
class Composite : public Component
{
protected:
	std::vector<std::shared_ptr<Component>> m_children;
public:
	Composite() = default;
	Composite(size_t price) : Component(price) {}
	virtual size_t calculatePrice() const override;
	virtual void addChild(const std::shared_ptr<Component>& child);
	virtual void removeChild(const std::shared_ptr<Component>& child);

};

