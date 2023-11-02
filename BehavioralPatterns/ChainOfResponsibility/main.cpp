#include "Handler.hpp"

int main() {
	// Create handlers
	auto r3handler = std::make_shared<R3Handler>();
	auto r2handler = std::make_shared<R2Handler>(r3handler);
	auto r1handler = std::make_shared<R1Handler>(r2handler);

	// Chain structure : r1handler->r2handler->r3handler

	// Send requests to the chain
	r1handler->handleRequest(Request(RequestType::R1, "[R1 Content]")); // handled
	r1handler->handleRequest(Request(RequestType::R2, "[R2 Content]")); // handled
	r1handler->handleRequest(Request(RequestType::R3, "[R3 Content]")); // handled
	r1handler->handleRequest(Request(RequestType::R4, "[R4 Content]")); // not handled
	return 0;
}