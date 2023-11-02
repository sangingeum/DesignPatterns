#pragma once
class AbstractClass
{
protected:
	virtual void preHook() {}
	virtual void postHook() {}
	virtual void introduceTopic() = 0;
	virtual void TeachTopic() = 0;
	virtual void giveAssignment() = 0;
public:
	void deliverLecture(); // not virtual
		
};

