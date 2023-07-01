#pragma once
#include "Singleton.hpp"
#include <iostream>

class Singleton
{
	Singleton() = default;
	// delete copy constructor
	Singleton(const Singleton&) = delete;
	// delete assignment operation
	void operator=(const Singleton&) = delete;
	~Singleton() = default;

public:
	static Singleton& instance();
	void log(int num);
};

