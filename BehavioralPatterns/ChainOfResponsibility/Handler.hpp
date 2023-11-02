#pragma once
#include "Request.hpp"
#include <memory>
class Handler
{	
protected:
	std::shared_ptr<Handler> m_nextHandler{};
public:
	virtual ~Handler() = default;
	Handler() = default;
	Handler(const std::shared_ptr<Handler>& nextHandler) : m_nextHandler(nextHandler) {}
	virtual void handleRequest(const Request& request) = 0;
};

class R1Handler : public Handler {
public:
	R1Handler() = default;
	R1Handler(const std::shared_ptr<Handler>& nextHandler) : Handler(nextHandler) {}
	virtual void handleRequest(const Request& request) override;
};

class R2Handler : public Handler {
public:
	R2Handler() = default;
	R2Handler(const std::shared_ptr<Handler>& nextHandler) : Handler(nextHandler) {}
	virtual void handleRequest(const Request& request) override;
};

class R3Handler : public Handler {
public:
	R3Handler() = default;
	R3Handler(const std::shared_ptr<Handler>& nextHandler) : Handler(nextHandler) {}
	virtual void handleRequest(const Request& request) override;
};


