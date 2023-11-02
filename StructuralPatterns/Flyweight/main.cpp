#include "MovingObject.hpp"
#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
#include "utils.hpp" // This code works on windows only

int main() {
	std::vector<std::unique_ptr<MovingObject>> objectVector;
	objectVector.push_back(std::make_unique<MovingObject>(0, 0, 1, 2, "white", ">>==>", "sharp_arrow"));
	objectVector.push_back(std::make_unique<MovingObject>(0, 0, 2, 2, "white", ">>==>", "sharp_arrow"));
	objectVector.push_back(std::make_unique<MovingObject>(0, 0, 4, 1, "white", ">>==>", "sharp_arrow"));
	objectVector.push_back(std::make_unique<MovingObject>(0, 0, 2, 3, "black", ">>==>", "sharp_arrow"));
	objectVector.push_back(std::make_unique<MovingObject>(0, 0, 5, 1, "black", ">>==>", "sharp_arrow"));
	objectVector.push_back(std::make_unique<MovingObject>(0, 0, 3, 6, "black", ">>==>", "sharp_arrow"));
	objectVector.push_back(std::make_unique<MovingObject>(0, 0, 1, 5, "white", ">>==D", "arrow"));
	objectVector.push_back(std::make_unique<MovingObject>(0, 0, 0, 3, "white", ">>==D", "arrow"));
	// Moving objects share the color, texture, and name strings to reduce memory usage.
	// There are three different color, texture and name combinations, which are 
	// ["white", ">>==>", "sharp_arrow"],["black", ">>==>", "sharp_arrow"], ["white", ">>==D", "arrow"].
	// Therefore, only three Flyweights are stored in the FlyweightFactory

	for (size_t i = 0; i < 100; ++i) {
		for (const auto& object : objectVector) {
			object->render();
			object->update();
		}
		std::cout << "Current FlyweightFactory Size: " << FlyweightFactory::instance().getSize() << "\n"; // 3
		std::chrono::milliseconds delay(1000); // sleep for one second
		std::this_thread::sleep_for(delay);
		clearConsole();
	}
	
	return 0;
}