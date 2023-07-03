#include "Director.hpp"

Director::Director(std::unique_ptr<Builder>&& builder) 
	: m_builder(std::move(builder))
{
}
void Director::setBuilder(std::unique_ptr<Builder>&& builder) {
	m_builder = std::move(builder);
}
void Director::setFlavor(const std::string flavor) {
	m_flavor = flavor;
}

std::unique_ptr<Product> Director::construct() {
	m_builder->reset();
	m_builder->setName();
	m_builder->setID();
	m_builder->setFlavor(m_flavor);
	m_builder->setCompany();
	return m_builder->getResult();
}
