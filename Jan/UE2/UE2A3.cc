#include <iostream>

using namespace std;

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

int main(int argc, char **argv)
{
    int n, q;
    cout << "Geben Sie n ein: " << endl;
    cin >> n;
    cout << "Geben Sie q ein: " << endl;
    cin >> q;

    cout << "Das Ergebnis ist (iterative) " << iterative(n, q) << endl;
    cout << "Das Ergebnis ist (recursive) " << recursive(n, q) << endl;
    return 0;
}