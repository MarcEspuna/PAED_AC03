#include <iostream>
#include <string>
#include "UI.h"



void UI::showMenu()
{
    std::cout << "Menu: " << std::endl;
    std::cout << "\t1. potencia:\t2. aBinari\t3. comptaImparells\t4. exit" << std::endl;
}

userOptionSelect UI::askForOption()
{

    std::string option;

    do 
    { 
        std::cout << "Select Option: ";
        std::getline(std::cin, option);
    } while (!atoi(option.c_str()));

    switch (atoi(option.c_str()))
    {
    case 1:
        return userOptionSelect::POTENCIA;
        break;
    case 2:
        return userOptionSelect::aBINARI;
        break;
    case 3:
        return userOptionSelect::COMPTA_IMPARELLS;
        break;
    case 4:
        return userOptionSelect::EXIT;
        break;
    default:
        return userOptionSelect::UNDEFINDED;
        break;
    }

}

std::pair<int, int> UI::askForPow()
{
    std::string base;
    std::string exponent;
    std::pair<int, int> args;

    do
    {
        std::cout << "Base: ";
        std::getline(std::cin, base);
    } while (!atoi(base.c_str()));

    do
    {
        std::cout << "Exponent: ";
        std::getline(std::cin, exponent);
    } while (!atoi(exponent.c_str()));

    int intBase = atoi(base.c_str());
    int intExp = atoi(exponent.c_str());

    args = std::make_pair(intBase, intExp);

    return args;

}

void UI::showResultInt(const uint64_t& result)
{
    std::cout << "Result is: " << result << std::endl;
}


