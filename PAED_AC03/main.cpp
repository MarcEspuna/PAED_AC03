#include "Controller.h"

int main()
{

	UI userInterface;
	Event functions;
	Controller controller(userInterface, functions);
	controller.Run();


	return 0;
}
