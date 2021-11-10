#pragma once
#include <vector>
#include <iostream>
#include <string>
#include <chrono>


class Crono
{
private:
	std::chrono::high_resolution_clock::time_point start;
	std::chrono::high_resolution_clock::time_point finish;

public:
	Crono()
		:start(std::chrono::high_resolution_clock::now())
	{

	}

	~Crono()
	{
		finish = std::chrono::high_resolution_clock::now();
		std::cout << "Operation Duration: " << std::chrono::duration_cast<std::chrono::nanoseconds>(finish - start).count() << "ns\t";
	}
};

class Event
{
public:
	uint64_t potencia(int base, int exponent);
	uint64_t aBinari(const uint64_t& decimal);
	uint64_t comptaImparells(std::vector<int> arr);


};

