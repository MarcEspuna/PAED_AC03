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
	uint64_t decimal;
	std::vector<int> arr;
	do {
		uiManager.showMenu();
		userOption = uiManager.askForOption();
		switch (userOption)
		{
		case userOptionSelect::POTENCIA:
			args = uiManager.askForPow();
			{
				Crono crono;
				result = event.potencia(args.first, args.second);
			}
			uiManager.showResultInt(result);
			uiManager.newLine();
			break;
		case userOptionSelect::aBINARI:
			decimal = uiManager.askForDecimal();
			{
				Crono crono;
				result = event.aBinari(decimal);
			}
			uiManager.showResultInt(result);
			uiManager.newLine();
			break;

		case userOptionSelect::COMPTA_IMPARELLS:
			arr = uiManager.askForArray();
			{
				Crono crono;
				result = event.comptaImparells(arr);
			}
			uiManager.showResultInt(result);
			uiManager.newLine();
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