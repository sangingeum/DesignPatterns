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
	virtual void traverse(const std::vector<int>& arr) override {
		for (int num : arr) {
			std::cout << num << " ";
		}
		std::cout << "\n";
	}
};

class ConcreteStrategyIncreasing : public Strategy
{
public:
	virtual void traverse(const std::vector<int>& arr) override {
		auto tempArr = arr;
		std::sort(tempArr.begin(), tempArr.end());
		for (int num : tempArr) {
			std::cout << num << " ";
		}
		std::cout << "\n";
	}
};

class ConcreteStrategyDecreasing : public Strategy
{
public:
	virtual void traverse(const std::vector<int>& arr) override {
		auto tempArr = arr;
		std::sort(tempArr.rbegin(), tempArr.rend());
		for (int num : tempArr) {
			std::cout << num << " ";
		}
		std::cout << "\n";
	}
};