#include "Adapter.hpp"
#include "Target.hpp"
#include <vector>
int main() {
	std::vector<std::unique_ptr<Target>> targets;
	targets.push_back(std::make_unique<ConcreteTarget>());
	targets.push_back(std::make_unique<ClassAdapter>());
	targets.push_back(std::make_unique<ObjectAdapter>());
	for (const auto& it : targets) {
		std::cout << it->request(); // All of them now have the same interface for clients to use.
	}

	return 0;
}