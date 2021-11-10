#include "Controller.h"



Controller::Controller(UI uiManager, Event event)
	:uiManager(uiManager), event(event)
{

}

void Controller::Run()
{
	bool run = true;
	userOptionSelect userOption;
	uint64_t result;
	std::pair<int, int> args;

	do {
		uiManager.showMenu();
		userOption = uiManager.askForOption();
		switch (userOption)
		{
		case userOptionSelect::POTENCIA:
			args = uiManager.askForPow();
			result = event.potencia(args.first, args.second);
			uiManager.showResultInt(result);
			uiManager.newLine();
			break;
		case userOptionSelect::aBINARI:


			break;

		case userOptionSelect::COMPTA_IMPARELLS:


			break;

		case userOptionSelect::EXIT:
			std::cout << "Exiting...\n";
			run = false;
			break;
		case userOptionSelect::UNDEFINDED:
			std::cout << "Please enter a valid option" << std::endl;
			break;
		default:
			break;
		}
	} while (run);



}