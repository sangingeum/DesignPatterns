#include "ConcreteClass.hpp"
void ConcreteClassMath::preHook() {
	std::cout << "Math class starts..\n";
}
void ConcreteClassMath::introduceTopic() {
	std::cout << "Introduces the concept of the derivative..\n";
}
void ConcreteClassMath::TeachTopic() {
	std::cout << "Explains the definition of the derivative..\n";
}
void ConcreteClassMath::giveAssignment() {
	std::cout << "Gives online quiz assignments..\n";
}
void ConcreteClassMath::postHook() {
	std::cout << "Anounces the midterm exam date..\n";
}

void ConcreteClassPhysics::preHook() {
	std::cout << "Physics class starts..\n";
}
void ConcreteClassPhysics::introduceTopic() {
	std::cout << "Introduces the law of conservation of momentum..\n";
}
void ConcreteClassPhysics::TeachTopic() {
	std::cout << "Explains the law of conservation of momentum..\n";
}
void ConcreteClassPhysics::giveAssignment() {
	std::cout << "Gives a report assignment..\n";
}
