#pragma once
#include <iostream>

class Red;
class Green;
class Blue;
class Color
{
public:
	virtual void mix(Color& color) = 0;
	virtual void printMixedColor(Red& color) = 0;
	virtual void printMixedColor(Green& color) = 0;
	virtual void printMixedColor(Blue& color) = 0;
	virtual ~Color() = default;
};

class Red : public Color
{
public:
	virtual void mix(Color& color) {
		color.printMixedColor(*this);
	}
	virtual void printMixedColor(Red& color) {
		std::cout << "Red\n";
	}
	virtual void printMixedColor(Green& color) {
		std::cout << "Yellow\n";
	}
	virtual void printMixedColor(Blue& color) {
		std::cout << "Magenta\n";
	}
};
class Green : public Color
{
public:
	virtual void mix(Color& color) {
		color.printMixedColor(*this);
	}
	virtual void printMixedColor(Red& color) {
		std::cout << "Yellow\n";
	}
	virtual void printMixedColor(Green& color) {
		std::cout << "Green\n";
	}
	virtual void printMixedColor(Blue& color) {
		std::cout << "Cyan\n";
	}
};
class Blue : public Color
{
public:
	virtual void mix(Color& color) {
		color.printMixedColor(*this);
	}
	virtual void printMixedColor(Red& color) {
		std::cout << "Magenta\n";
	}
	virtual void printMixedColor(Green& color) {
		std::cout << "Cyan\n";
	}
	virtual void printMixedColor(Blue& color) {
		std::cout << "Blue\n";
	}
};
