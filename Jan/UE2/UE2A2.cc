#include <iostream>

using namespace std;

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
    int number, r;
    int n = 0;
    cout << "Gebe eine Nummer ein: " << flush;
    cin >> number;
    while (n < number)
    {
        r = fibonacci(n);
        cout << r << endl;
        n = n + 1;
    }
    cout << "Die Summe ist: " << fibonacci(number) << endl;
    // je größer die Zahl N desto länger dauert es die Fibonaccizahlen auszurechnen
    // langsam ab N > 40

    return 0;
}