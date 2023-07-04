#include "RedefinedAbstraction.hpp"
#include "ConcreteImplementor.hpp"


int main() {
	ConcreteImplementorA ImA;
	ConcreteImplementorB ImB;
	RedefinedAbstractionA AbstractionAwithImA(ImA);
	RedefinedAbstractionB AbstractionBwithImA(ImA);
	RedefinedAbstractionA AbstractionAwithImB(ImB);
	RedefinedAbstractionB AbstractionBwithImB(ImB);
	AbstractionAwithImA.introduce(); // Hi, I'm James Smith I can [Walk & Run & Fly]
	AbstractionBwithImA.exercise(); // James Smith does the following exercices: [Walk & Run & Fly]
	AbstractionAwithImB.introduce(); // Hi, I'm Linda Taylor I can [Walk & Run & Swim & Dive]
	AbstractionBwithImB.exercise(); // Linda Taylor does the following exercices: [Walk & Run & Swim & Dive]

	return 0;
}