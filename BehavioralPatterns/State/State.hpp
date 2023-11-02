#pragma once
#include <memory>
#include <iostream>
class Context;
class State
{	
protected:
	Context* m_context;
public:
	State() = default;
	virtual ~State() = default;
	virtual void move() = 0;
	virtual void talk() = 0;
	virtual void setContext(Context* context);
};





