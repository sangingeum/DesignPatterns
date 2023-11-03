#pragma once
#include "EventSubscriber.hpp"
#include "Model.hpp"
#include "View.hpp"

class Presenter : public EventSubscriber
{
private:
	Model& m_model;
	View& m_view;
public:
	Presenter(Model& model, View& view)
		: m_model(model), m_view(view)
	{}
	void onTextInput(const std::string& str) override {
		m_model.process(str);
		m_view.updateString(m_model.getString());
		m_view.updateCounter(m_model.getCounter());
	}
};

