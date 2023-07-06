#include "Facade.hpp"
#include <iostream>
int main() {
	SubsystemA sysA;
	SubsystemB sysB;
	SubsystemC sysC;
	SubsystemD sysD;
	Facade facade(sysA, sysB, sysC, sysD); // facade design gives clients simple interface to use subsystems
	std::cout << facade.createRegularBurger() << "\n";
	std::cout << facade.createDoublePattyBurger() << "\n";

	return 0;
}