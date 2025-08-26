#pragma once
#include <memory>
#include <string>
class Observer
{	
public:
	virtual ~Observer() = default;
	virtual void update(const std::string& state) = 0;
};

