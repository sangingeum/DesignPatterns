#pragma once
#include <string>
#include <vector>

class View
{
private:
	std::string m_curString{};
	uint32_t m_counter{ 0 };
public:
	void updateString(const std::string& str) {
		m_curString = str;
	}
	void updateCounter(uint32_t counter) {
		m_counter = counter;
	}
	std::string getString() const {
		return m_curString;
	}
	uint32_t getCounter() const {
		return m_counter;
	}
};

