#pragma once
#include <unordered_map>
#include <iostream>

/*
cons:
Manual release of memory : The Multiton::clear() method
should be explicitly called to release the allocated memory.

pros:
can create arbitrary number of target objects

//
Smart pointers are not allowed unless the deconstructor of Target
is set to public, which may lead to unexpected deletion of Target instances.  
//
*/


class Multiton
{
	Multiton(size_t id) : m_id(id) {}
	Multiton(const Multiton&) = delete; // delete copy constructor
	void operator=(const Multiton&) = delete; // delete assignment operation
	static std::unordered_map<size_t, Multiton*> m_instanceMap;
	~Multiton() = default;
	size_t m_id{ 0 };
public:
	static Multiton* instance(size_t index);
	static void clear();
	void log() {
		std::cout << "Address " << this << ", Num " << m_id << "\n";
	}
};

