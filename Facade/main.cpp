#include "Facade.hpp"
#include <iostream>
int main() {
	SubsystemA sysA;
	SubsystemB sysB;
	SubsystemC sysC;
	SubsystemD sysD;
	Facade facade(sysA, sysB, sysC, sysD);

	// The Facade pattern offers a simple interface to the subsystems
	std::cout << facade.createRegularBurger() << "\n";
	std::cout << facade.createDoublePattyBurger() << "\n";

	return 0;
}