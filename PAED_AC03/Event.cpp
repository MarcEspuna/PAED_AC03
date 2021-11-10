#include "Event.h"
#include<iostream>
#include<string>

uint64_t Event::potencia(int base, int exponent)
{
	if (exponent == 1)
	{
		return base;
	}

	return base * potencia(base, exponent - 1);

}

uint64_t Event::aBinari(const uint64_t& decimal)
{
	uint64_t intBits = 0;
	if (decimal <= 1)
	{
		return decimal;
	}
	else intBits = decimal % 2;
	return aBinari(decimal / 2) * 10 + intBits;
}

uint64_t Event::comptaImparells(std::vector<int> arr)
{
	uint64_t auxiliarValue = 0;
	if (arr.size() <= 1)
	{
		return arr[0] % 2;
	}
	else 
	{
		auxiliarValue = arr[0];
		arr.erase(arr.begin());
	}

	return (auxiliarValue % 2) + comptaImparells(arr);

}
