#pragma once
#include "Subsystem.hpp"
class Facade
{
	SubsystemA& m_systemA;
	SubsystemB& m_systemB;
	SubsystemC& m_systemC;
	SubsystemD& m_systemD;
public:
	Facade(SubsystemA& system_A, SubsystemB& system_B,
		SubsystemC& system_C, SubsystemD& system_D)
		: m_systemA(system_A), m_systemB(system_B),
		m_systemC(system_C), m_systemD(system_D) {}
	std::string createRegularBurger();
	std::string createDoublePattyBurger();
};

