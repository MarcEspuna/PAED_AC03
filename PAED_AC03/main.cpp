#include <iostream>
#include <vector>
#include <string>
#include "Controller.h"

uint64_t potencia(int base, int exponent)
{
	if (exponent == 1)
	{
		return base;
	}
	return base * potencia(base, exponent - 1);
}
/*
int aBinari(int decimal)
{
	return 0;
}


int comptaImparells(std::vector<int> arr)
{
	return 0;
}
*/

int main()
{
	UI userInterface;
	Event functions;
	Controller controller(userInterface, functions);
	controller.Run();

	return 0;
}
