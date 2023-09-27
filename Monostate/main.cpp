#include "Monostate.hpp"
#include <iostream>
#include <format>

int main() {
	Monostate m1, m2, m3;
	std::cout << std::format("m1.get() == {}\n", m1.get());
	std::cout << std::format("m2.get() == {}\n", m2.get());
	std::cout << std::format("m3.get() == {}\n", m3.get());

	m1.set(5);
	std::cout << std::format("m1.get() == {}\n", m1.get());
	std::cout << std::format("m2.get() == {}\n", m2.get());
	std::cout << std::format("m3.get() == {}\n", m3.get());

	m3.set(2);
	m2.set(1);
	std::cout << std::format("m1.get() == {}\n", m1.get());
	std::cout << std::format("m2.get() == {}\n", m2.get());
	std::cout << std::format("m3.get() == {}\n", m3.get());

	/* Result:
	m1.get() == 0
	m2.get() == 0
	m3.get() == 0
	m1.get() == 5
	m2.get() == 5
	m3.get() == 5
	m1.get() == 1
	m2.get() == 1
	m3.get() == 1
	*/

	return 0;
}