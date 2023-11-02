#include "ConcreteClass.hpp"

int main() {
	// Create Concrete classes
	ConcreteClassMath math;
	ConcreteClassPhysics physics;
	// Execute template methods
	math.deliverLecture();
	physics.deliverLecture();

}