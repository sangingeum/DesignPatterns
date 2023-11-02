#include "Multiton.hpp"
int main() {
	// check if instances at the same index 
	// have the same address
	Multiton::instance(0)->log();
	Multiton::instance(0)->log();
	Multiton::instance(1)->log();
	Multiton::instance(1)->log();
	Multiton::instance(2)->log();
	Multiton::instance(2)->log();
	Multiton::instance(3)->log();
	Multiton::instance(3)->log();

	Multiton::clear(); // This will clear all the instances created so far.
	Multiton::instance(0)->log();
	Multiton::instance(0)->log();
	Multiton::instance(1)->log();
	Multiton::instance(1)->log();
	Multiton::instance(2)->log();
	Multiton::instance(2)->log();
	Multiton::instance(3)->log();
	Multiton::instance(3)->log();
	Multiton::clear();

	return 0;
}