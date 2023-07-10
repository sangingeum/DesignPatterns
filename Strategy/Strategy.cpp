#include "Strategy.hpp"
void ConcreteStrategyBasic::traverse(const std::vector<int>& arr) {
	for (int num : arr) {
		std::cout << num << " ";
	}
	std::cout << "\n";
}

void ConcreteStrategyIncreasing::traverse(const std::vector<int>& arr) {
	auto tempArr = arr;
	std::sort(tempArr.begin(), tempArr.end());
	for (int num : tempArr) {
		std::cout << num << " ";
	}
	std::cout << "\n";
}

void ConcreteStrategyDecreasing::traverse(const std::vector<int>& arr) {
	auto tempArr = arr;
	std::sort(tempArr.rbegin(), tempArr.rend());
	for (int num : tempArr) {
		std::cout << num << " ";
	}
	std::cout << "\n";
}