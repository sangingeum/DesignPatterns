#include "Caretaker.hpp"

void Caretaker::push(const std::shared_ptr<Memento>& memento) {
	m_history.push(memento);
}
void Caretaker::undo() {
	m_history.top()->restore();
	m_history.pop();
}