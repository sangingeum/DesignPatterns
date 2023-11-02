#pragma once
#include "Model.hpp"
#include "View.hpp"
#include <string>

class Controller
{
private:
	Model& m_model;
	View& m_view;
public:
	Controller(Model& model, View& view)
		: m_model(model), m_view(view)
	{}
	void handleUserInput(const std::string& input) {
		m_model.process(input);
		m_view.update();
	}
	void displayView() const {
		m_view.display();
	}
};

