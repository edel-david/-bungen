#include <iostream>

void collatz(int number)
{
    
    while (number != 1 & number != 0 & number != -1 & number != -5 & number != -17)
    
    {
        std::cout << number << std::endl;
        if (number % 2 == 0)
        {
            number /= 2;
        }
        else
        {
            number = number * 3 + 1;
        }
    }
    std::cout << number << std::endl;
}

int main()
{
    long num;
    std::cout << "gib eine Nummer ein: " << std::endl;
    std::cin >> num ;
    collatz(num);
}

