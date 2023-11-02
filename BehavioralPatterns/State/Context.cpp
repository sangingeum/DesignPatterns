#include "Context.hpp"
void Context::move() {
	m_state->move();
}
void Context::talk() {
	m_state->talk();
}
void Context::setState(std::unique_ptr<State>&& state) {
	state->setContext(this);
	m_state = std::move(state);
}
const std::string& Context::getName() {
	return m_name;
}