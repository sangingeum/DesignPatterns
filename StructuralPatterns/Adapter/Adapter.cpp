#include "Adapter.hpp"


std::string	ClassAdapter::request() {
	return specificRequest().substr(0, 5) + "ClassAdapter\n";
}
std::string	ObjectAdapter::request() {
	return m_adaptee->specificRequest().substr(0, 5) + "ObjectAdapter\n";
}