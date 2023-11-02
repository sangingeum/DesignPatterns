#include <iostream>
#include "Controller.hpp"

int main() {
	Model model;
	View view{ model };
	Controller controller{ model, view };
	std::string input;
	while (true) {
		std::cout << "Enter your input: ";
		std::cin >> input;
		controller.handleUserInput(input);
		controller.displayView();
	}

	/* Example
	Enter your input: Hi
	View string: [PROCESSED]Hi[PROCESSED]
	View counter: 1
	Enter your input: Good Morning
	View string: [PROCESSED]Good[PROCESSED]
	View counter: 2
	Enter your input: View string: [PROCESSED]Morning[PROCESSED]
	View counter: 3
	*/

	return 0;
}