#pragma once
class Monostate
{
private:
	static size_t state;
public:
	size_t get() {
		return state;
	}
	void set(size_t state_) {
		state = state_;
	}
};


