#include <iostream>

int iterative(int n, int q)
{
    int qeg = 1;

    while (n > 0)
    {
        qeg = qeg * q;
        n--;
    }

    return qeg;
}

int recursive(int n, int q)
{
    if (n == 0)
    {
        return 1;
    }

    else
    {
        return recursive(n - 1, q) * q;
    }
}

int better(int n, int q)
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

int main(int argc, char **argv)
{
    int n, q;
    std::cout << "Geben Sie n ein: " << std::endl;
    cin >> n;
    std::cout << "Geben Sie q ein: " << std::endl;
    cin >> q;

    std::cout << "Das Ergebnis ist (iterative) " << iterative(n, q) << std::endl;
    std::cout << "Das Ergebnis ist (recursive) " << recursive(n, q) << std::endl;
    std::cout << "Das Ergebnis ist (better) " << better(n, q) << std::endl;
    return 0;
}