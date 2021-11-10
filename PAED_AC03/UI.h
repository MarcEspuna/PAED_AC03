#pragma once
#include <utility>
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
	void showResultInt(const uint64_t& result);
	inline void newLine() { std::cout << "\n"; }
};

