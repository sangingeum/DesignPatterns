#include "Command.hpp"
#include <vector>
#include <memory>
int main() {
	Receiver receiver;
	std::vector<std::unique_ptr<Command>> commands;
	// Create commands
	commands.push_back(std::make_unique<ConcreteCommand1>());
	commands.push_back(std::make_unique<ConcreteCommand2>(receiver, "[Content]"));
	commands.push_back(std::make_unique<ConcreteCommand3>(receiver));
	// Execute commands
	for (auto& command : commands) {
		command->execute();
	}

	return 0;
}