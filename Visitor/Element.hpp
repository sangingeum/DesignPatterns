#pragma once
class Visitor;
class Element
{
public:
	virtual ~Element() = default;
	virtual void accept(Visitor& visitor) = 0;
};

