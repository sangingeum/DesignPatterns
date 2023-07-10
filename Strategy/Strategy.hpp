#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
class Strategy
{
public:
	virtual ~Strategy() = default;
	virtual void traverse(const std::vector<int>& arr) = 0;
};


class ConcreteStrategyBasic : public Strategy
{
public:
	virtual void traverse(const std::vector<int>& arr) override;
};

class ConcreteStrategyIncreasing : public Strategy
{
public:
	virtual void traverse(const std::vector<int>& arr) override;
};

class ConcreteStrategyDecreasing : public Strategy
{
public:
	virtual void traverse(const std::vector<int>& arr) override;
};