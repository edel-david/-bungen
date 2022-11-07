#include <iostream>
int main()
{
}

void collatz(int number)
{
    std::cout << number << std::endl;
    while (number != 1 & number != 0 & number != -1 & number != -5 & number != -17)
    {
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