#pragma once
#include <string>

class EventSubscriber
{
public:
	virtual void onTextInput(const std::string& str) = 0;
};

