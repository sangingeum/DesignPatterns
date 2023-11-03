#pragma once
#include <string>
#include <iostream>
#include <functional>
#include "EventSubscriber.hpp"

class View
{
private:
	std::string m_str{};
	uint32_t m_counter{ 0 };
	EventSubscriber* m_subscriber{ nullptr };
public:
	void subscribe(EventSubscriber* subscriber) {
		m_subscriber = subscriber;
	}
	void updateString(const std::string& str) {
		m_str = str;
	}
	void updateCounter(const uint32_t counter) {
		m_counter = counter;
	}
	void display() const {
		std::cout << "View string: " << m_str << "\n";
		std::cout << "View counter: " << m_counter << "\n";
	}
	void handleTextInput(const std::string& str) {
		m_subscriber->onTextInput(str);
	}
	void start() {
		std::string input;
		std::cout << "Starting View loop\n";
		while (true) {
			std::cout << "Enter your input: ";
			std::cin >> input;
			handleTextInput(input);
			display();
		}
	}
};

