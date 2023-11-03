#include "Presenter.hpp"

int main() {
	Model model;
	View view;
	Presenter presenter{ model, view };
	view.subscribe(&presenter);
	view.start();
	/* Example
	Starting View loop
	Enter your input: Fox
	View string: [PROCESSED]Fox[PROCESSED]
	View counter: 1
	Enter your input: Water
	View string: [PROCESSED]Water[PROCESSED]
	View counter: 2
	Enter your input: hi
	View string: [PROCESSED]hi[PROCESSED]
	View counter: 3
	*/
	return 0;
}