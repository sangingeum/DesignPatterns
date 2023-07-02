#pragma once
#include <unordered_map>
#include <iostream>
#include <memory>

/*
Multiton implemented with smart pointers
*/

class Multiton
{
	Multiton(size_t id) : m_id(id) {}
	Multiton(const Multiton&) = delete; // delete copy constructor
	void operator=(const Multiton&) = delete; // delete assignment operation
	static std::unordered_map<size_t, std::shared_ptr<Multiton>> m_instanceMap;
	size_t m_id{ 0 };
public:
	~Multiton() = default; // does not lead to unexpected deletion of instances because
						   // m_instanceMap always holds an ownership and the reference
						   // of the shared_ptrs in the instanceMap are not accessible outside
						   // the class
	static std::shared_ptr<Multiton> instance(size_t index);
	static void clear();
	void log() {
		std::cout << "Address " << this << ", Num " << m_id << "\n";
	}
};


