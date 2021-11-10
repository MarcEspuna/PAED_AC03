#pragma once
#include <utility>
#include <iostream>
#include "Event.h"
#include "UI.h"

class Controller
{
private:
	UI uiManager;
	Event event;

public:

	Controller(UI uiManager, Event event);
	void Run();
	



};

