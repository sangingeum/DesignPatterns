#include "Request.hpp"
RequestType Request::getType() const {
	return m_type;
}

const std::string& Request::getContent() const {
	return m_content;
}