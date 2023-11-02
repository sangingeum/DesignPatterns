#include "ConcreteMemento.hpp"
#include "ConcreteOriginator.hpp"
#include "Caretaker.hpp"

int main() {
	// Create a caretaker and a originator
	Caretaker caretaker;
	ConcreteOriginator originator;
	
	
	// Send the current state of the originator
	// to the caretaker before updating it
	for (size_t i = 0; i < 5; i++) {
		originator.showStatus();
		caretaker.push(originator.createMemento());
		originator.updateStatus();
	}

	// Undo updates
	originator.showStatus();
	for (size_t i = 0; i < 5; i++) {
		caretaker.undo();
		originator.showStatus();
	}
	
	return 0;
}