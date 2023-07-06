#pragma once
#include "Subject.hpp"
#include <memory>
/*
Virtual proxy implementation
*/
class Proxy : public Subject
{
	std::string m_fileName{};
	std::unique_ptr<RealSubject> m_realSubject;
public:
	Proxy(const std::string fileName) : m_fileName(fileName){}
	virtual void request() override;
	virtual void clear() override;
};

