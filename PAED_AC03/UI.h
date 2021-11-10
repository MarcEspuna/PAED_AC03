#pragma once
#include <utility>
#include <vector>
enum class userOptionSelect 
{
	POTENCIA, aBINARI, COMPTA_IMPARELLS, EXIT, UNDEFINDED
};


class UI
{
public:
	void showMenu();
	userOptionSelect askForOption();
	std::pair<int, int> askForPow();
	int askForDecimal();
	std::vector<int> askForArray();
	void showResultInt(const uint64_t& result);
	inline void newLine() { std::cout << "\n"; }

};

