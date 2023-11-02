#pragma once
#include "Receiver.hpp"
#include <string>
class Command
{
public:
	Command() = default;
	virtual ~Command() = default;
	virtual void execute() = 0;
};

class ConcreteCommand1 : public Command // Command without a receiver
{
public:
	ConcreteCommand1() = default;
	virtual void execute() override;
};

class ConcreteCommand2 : public Command // Command with a receiver and a parameter
{	
	Receiver& m_receiver;
	std::string m_param{};
public:
	ConcreteCommand2(Receiver& receiver, const std::string& param) : m_receiver(receiver), m_param(param){}
	virtual void execute() override;
};

class ConcreteCommand3 : public Command // Command with a receiver
{
	Receiver& m_receiver;
public:
	ConcreteCommand3(Receiver& receiver) : m_receiver(receiver) {}
	virtual void execute() override;
};


