#include <iostream>

void collatz(int number)
{
    std::cout << "Die Nummer ist: " << number << std::endl;

    if (number == 0 || number == -17 || number == -1 || number == -5 || number == 1)
    {
        std::cout << "Das Ende ist erreicht mit Zahl: " << number << std::endl;
    }
    else
    {
        if ((number % 2) == 0)
        {
            collatz(number / 2);
        }
        else
        {
            collatz(number * 3 + 1);
        }
    }
}

int main(int argc, char **argv)
{
    int number;
    std::cout << "Gebe eine Nummer ein: " << std::flush;
    std::cin >> number;

    collatz(number);

    // hat falls die letzte Ziffer die 1 ist immer 421 als Ende
    // falls die letzte Ziffer 0 ist, so ist auch der Startwert 0

    return 0;
}