#include "DoubleDispatch.hpp"
#include <vector>
#include <memory>
int main() {
	std::vector<std::unique_ptr<Color>> colors;
	colors.emplace_back(std::make_unique<Red>());
	colors.emplace_back(std::make_unique<Green>());
	colors.emplace_back(std::make_unique<Blue>());

	colors[0]->mix(*colors[0]);
	colors[0]->mix(*colors[1]);
	colors[0]->mix(*colors[2]);
	colors[1]->mix(*colors[0]);
	colors[1]->mix(*colors[1]);
	colors[1]->mix(*colors[2]);
	colors[2]->mix(*colors[0]);
	colors[2]->mix(*colors[1]);
	colors[2]->mix(*colors[2]);
	/*
	Red
	Yellow
	Magenta
	Yellow
	Green
	Cyan
	Magenta
	Cyan
	Blue
	*/
	return 0;
}