#include "AbstractClass.hpp"
void AbstractClass::deliverLecture() { 
	preHook();
	introduceTopic();
	TeachTopic();
	giveAssignment();
	postHook();
}