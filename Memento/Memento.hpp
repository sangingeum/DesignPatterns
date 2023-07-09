#pragma once
class Originator;
class Memento
{	
protected:
	Originator& m_originator;
public:
	Memento(Originator& originator) : m_originator(originator){}
	virtual ~Memento() = default;
	virtual void restore() = 0;
};

