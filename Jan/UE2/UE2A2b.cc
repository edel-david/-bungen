#include <iostream>

using namespace std;

int fibonacci(int number)
{
    int zahl1 = -1;
    int zahl2 = 1;
    int zahl3;
    while (number > 1)
    {
        zahl3 = zahl1 + zahl2;
        zahl1 = zahl2;
        zahl2 = zahl3;
        cout << zahl3 << endl;
        number--;
    }
    return 0;
}

int main(int argc, char **argv)
{
    int number;
    cout << "Gebe eine Nummer ein: " << flush;
    cin >> number;
    fibonacci(number);
    return 0;
}