#pragma once
#include <string>
class Model
{
private:
	uint32_t m_counter{ 0 };
public:
	std::string process(const std::string& input) {
		++m_counter;
		return "[PROCESSED]" + std::string(input) + "[PROCESSED]";
	}
	uint32_t getCounter() const {
		return m_counter;
	}
};

