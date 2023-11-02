#include "Context.hpp"

int main() {
	// Create a context and a vector of integers
	Context context;
	std::vector<int> arr{4, 2, 6, 2, 7, 5, 3, 8};
	// Use three different traversal strategies: Basic, Increasing, and Decreasing strategies
	context.traverse(arr); // 4 2 6 2 7 5 3 8
	context.setStrategy(std::make_unique<ConcreteStrategyIncreasing>());
	context.traverse(arr); // 2 2 3 4 5 6 7 8
	context.setStrategy(std::make_unique<ConcreteStrategyDecreasing>());
	context.traverse(arr); // 8 7 6 5 4 3 2 2

	return 0;
}