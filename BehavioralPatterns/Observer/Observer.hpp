#pragma once
#include <memory>
class Observer
{	
public:
	virtual ~Observer() = default;
	virtual void update() = 0;
};

