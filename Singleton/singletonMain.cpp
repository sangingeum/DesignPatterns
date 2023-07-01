#include "Singleton.hpp"
#include <iostream>


void checkSingleton() {
	static int i = 0;
	auto& s = Singleton::instance();
	s.log(i++);
}

int main() {
	// check if all the instances of Singleton have the same address
	for (size_t i = 0; i < 10; i++) {
		checkSingleton();
	}

	return 0;
}