#pragma once
class Node
{
public:
	enum class State {
		Running,
		Success,
		Failure
	};
	virtual State tick() = 0;
	virtual void clear() = 0;
	virtual ~Node() = default;
};

