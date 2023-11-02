#include "ConcreteObserver.hpp"
#include "ConcreteSubject.hpp"

int main() {
	// Create a subject and two observers
	auto subject = std::make_shared<ConcreteSubject>();
	auto observer1 = std::make_shared<ConcreteObserver>(subject);
	auto observer2 = std::make_shared<ConcreteObserver>(subject);
	subject->addSubscriber(observer1);
	subject->addSubscriber(observer2);
	{	// Create another observer
		auto observer3 = std::make_shared<ConcreteObserver>(subject);
		subject->addSubscriber(observer3);
		subject->setState("Good"); // Three observers are notified
	}   // observer3 is destroyed -> subject automatically detects that and adjust its list of subscribers
	subject->setState("Excellent"); // Two observers are notified
	subject->removeSubscriber(observer2);
	subject->setState("Normal"); // One observer is notified

	return 0;
}