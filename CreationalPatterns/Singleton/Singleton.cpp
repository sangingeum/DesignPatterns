#include "Singleton.hpp"

Singleton& Singleton::instance() {
	static Singleton instance;
	return instance;
}
void Singleton::log(int num) {
	std::cout << "Address " << this << ", Num " << num << "\n";
}