#include "Subsystem.hpp"

std::string SubsystemA::addBread(const std::string curIngredients) {
	return curIngredients + "[Bread]";
}

std::string SubsystemB::addPatty(const std::string curIngredients) {
	return curIngredients + "[Patty]";
}

std::string SubsystemC::addVegetable(const std::string curIngredients) {
	return curIngredients + "[Vegetable]";
}

std::string SubsystemD::addSauce(const std::string curIngredients) {
	return curIngredients + "[Sauce]";
}

