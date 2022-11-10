#include <iostream>

int fibonacci(int number)
{
    unsigned long long int zahl1 = -1;
    unsigned long long int zahl2 = 1;
    unsigned long long int zahl3;
    while (number > 1)
    {
        zahl3 = zahl1 + zahl2;
        zahl1 = zahl2;
        zahl2 = zahl3;
        std::cout << zahl3 << std::endl;
        number--;
    }
    return 0;
}

int main(int argc, char **argv)
{
    unsigned long long int number;
    std::cout << "Gebe eine Nummer ein: " << std::flush;
    std::cin >> number;
    fibonacci(number);
    return 0;
}