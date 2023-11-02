#pragma once
#include <string>
enum class RequestType {
	R1,
	R2,
	R3,
	R4
};

class Request
{	
	RequestType m_type;
	std::string m_content{};
public:
	Request(RequestType type, const std::string& content) : m_type(type), m_content(content){}
	RequestType getType() const;
	const std::string& getContent() const;
};

