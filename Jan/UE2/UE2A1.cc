#include <iostream>

using namespace std;

void collatz(int number)
{
    cout << "Die Nummer ist: " << number << endl;

    if (number == 0 || number == -17 || number == -1 || number == -5 || number == 1)
    {
        cout << "Das Ende ist erreicht mit Zahl: " << number << endl;
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
    cout << "Gebe eine Nummer ein: " << flush;
    cin >> number;

    collatz(number);
    // hat falls die letzte Ziffer die 1 ist immer 421 als Ende
    // falls die letzte Ziffer 0 ist, so ist auch der Startwert 0

    return 0;
}