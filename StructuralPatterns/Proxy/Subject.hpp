#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
class Subject
{
public:
	Subject() = default;
	virtual ~Subject() = default;
	virtual void request() = 0;
	virtual void clear() = 0;
};


class RealSubject : public Subject
{	
	std::string m_fileText{};
public:
	RealSubject(const std::string& fileName){
		std::ifstream file(fileName, std::ios::in);
		if (file) {
			std::stringstream ss;
			ss << file.rdbuf();
			m_fileText = ss.str();
		}
		else {
			m_fileText = "Error: Unable to open the file.";
		}
	}
	virtual void request() override;
	virtual void clear() override {} // Do nothing. This is for the Proxy class.
};

