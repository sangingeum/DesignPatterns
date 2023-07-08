#include "Receiver.hpp"
#include <iostream>
void Receiver::operation() {
	std::cout << "Receiver::operation() called\n";
}

void Receiver::operation(const std::string& param) {
	std::cout << "Receiver::operation(const std::string& param) called with the param: " << param << "\n";
}