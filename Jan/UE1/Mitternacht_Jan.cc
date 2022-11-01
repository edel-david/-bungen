
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
    double a, b, c, x1, x2;

    cout
        << "a = " << flush;
    cin >> a;
    cout
        << "b = " << flush;
    cin >> b;
    cout
        << "c = " << flush;
    cin >> c;

    x1 = (-b - sqrt((pow(b, 2)) - (4 * a * c))) / (2 * a);
    x2 = (-b + sqrt((pow(b, 2)) - (4 * a * c))) / (2 * a);

    std::cout << "Die Ergebnisse sind " << x1 << " und " << x2 << std::endl;
    return 0;
}