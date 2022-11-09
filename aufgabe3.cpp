#include <iostream>

int iterative(int q, int n)
{
    int erg = 1;
    for (int i = 0; i < n; i++)
    {
        erg *= q;
    }
    return erg;
}

int recursive(int q, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return recursive(q, n - 1) * q;
    }
}

int better(int q, int n)
{
    if (n == 0)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
        int faktor = better(q, n / 2);
        return faktor * faktor;
    }
    else
    {
        return better(q, n - 1) * q;
    }
}

int main(int argc, const char **argv)
{
    int base = 5;
    int pow = 9;
    std::cout << iterative(base, pow) << " and " << recursive(base, pow) << " and " << better(base, pow) << std::endl;
    return 0;
}
