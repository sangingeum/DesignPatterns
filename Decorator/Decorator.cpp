#include "Decorator.hpp"
std::string DecoratorParenthesis::getContent() {
	return "(" + m_component->getContent() + ")";
}
std::string DecoratorBracket::getContent() {
	return "[" + m_component->getContent() + "]";
}
std::string DecoratorDash::getContent() {
	return "-" + m_component->getContent() + "-";
}