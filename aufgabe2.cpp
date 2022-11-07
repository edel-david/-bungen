#include <iostream>

unsigned long long int fibonacci(unsigned long long int number)
{
    std::cout << "0" << std::endl;
    if (number == 1)
    {
        return 0;
    }
    if (number == 2)
    {
        std::cout << "1" << std::endl;
        return 1;
    }
    std::cout << "1" << std::endl;
    unsigned long long int f1 = 0;
    unsigned long long int f2 = 1;
    unsigned long long int fn;

    for (unsigned long long int i = 3; i <= number; i++)
    {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
        std::cout << fn << std::endl;
    }
    return fn;
}

int main(int argc, char *argv[])
{

    fibonacci(90);
    return 0;
}