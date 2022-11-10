#include <iostream>

int fibonacci(int number)
{
    if (number == 0)
    {
        return number;
    }
    if (number == 1)
    {
        return number;
    }
    else
    {
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
}

int main(int argc, char **argv)
{
    unsigned long long int number, r;
    int n = 0;
    std::cout << "Gebe eine Nummer ein: " << std::flush;
    std::cin >> number;
    while (n < number)
    {
        r = fibonacci(n);
        std::cout << r << std::endl;
        n = n + 1;
    }
    std::cout << "Die Summe ist: " << fibonacci(number) << std::endl;
    // je größer die Zahl N desto länger dauert es die Fibonaccizahlen auszurechnen
    // langsam ab N > 40

    return 0;
}