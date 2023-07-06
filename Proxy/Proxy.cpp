#include "Proxy.hpp"
void Proxy::request() {
	if (!m_realSubject) {
		m_realSubject = std::make_unique<RealSubject>(m_fileName);
	}
	m_realSubject->request();
}

void Proxy::clear() {
	if (m_realSubject) {
		m_realSubject.reset();
	}
}