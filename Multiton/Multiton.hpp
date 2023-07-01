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


class Target {
	Target(size_t id) : m_id(id) {}
	Target(const Target&) = delete; // delete copy constructor
	void operator=(const Target&) = delete; // delete assignment operation
	~Target() = default;
	// friend Multiton
	friend class Multiton;
	size_t m_id{ 0 };
public:
	void log() {
		std::cout << "Address " << this << ", Num " << m_id << "\n";
	}
};

class Multiton
{
	Multiton() = default;
	Multiton(const Multiton&) = delete; // delete copy constructor
	void operator=(const Multiton&) = delete; // delete assignment operation
	static std::unordered_map<size_t, Target*> m_instanceMap;
	~Multiton() = default;
public:
	static Target* instance(size_t index);
	static void clear();
};

