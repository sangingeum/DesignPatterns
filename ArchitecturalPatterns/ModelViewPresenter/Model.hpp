#pragma once
#include <string>
class Model
{
private:
	std::string m_string{};
	uint32_t m_counter{ 0 };
public:
	void process(const std::string& input) {
		++m_counter;
		m_string = "[PROCESSED]" + std::string(input) + "[PROCESSED]";
	}
	std::string getString() const {
		return m_string;
	}
	uint32_t getCounter() const {
		return m_counter;
	}
};