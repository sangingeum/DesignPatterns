#include "Handler.hpp"
#include <iostream>
void R1Handler::handleRequest(const Request& request) {
	if (request.getType() == RequestType::R1) {
		std::cout << "R1 Handler handled a request\n Content: " + request.getContent() << "\n";
	}
	if (m_nextHandler) {
		m_nextHandler->handleRequest(request);
	}
}

void R2Handler::handleRequest(const Request& request) {
	if (request.getType() == RequestType::R2) {
		std::cout << "R2 Handler handled a request\n Content: " + request.getContent() << "\n";
	}
	if (m_nextHandler) {
		m_nextHandler->handleRequest(request);
	}
}

void R3Handler::handleRequest(const Request& request) {
	if (request.getType() == RequestType::R3) {
		std::cout << "R3 Handler handled a request\n Content: " + request.getContent() << "\n";
	}
	if (m_nextHandler) {
		m_nextHandler->handleRequest(request);
	}
}