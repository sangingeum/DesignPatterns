#pragma once
#include <string>
class Receiver
{
public:
	Receiver() = default;
	void operation();
	void operation(const std::string& param);
};

