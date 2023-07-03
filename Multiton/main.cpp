#include "Multiton.hpp"
int main() {

	Multiton::instance(0)->log();
	Multiton::instance(0)->log();
	Multiton::instance(1)->log();
	Multiton::instance(1)->log();
	Multiton::instance(2)->log();
	Multiton::instance(2)->log();
	Multiton::instance(3)->log();
	Multiton::instance(3)->log();
	Multiton::clear();
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