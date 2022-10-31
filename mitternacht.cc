#include <iostream>
#include <cmath>

int main()
{
    double a, b, c;
    std::cout << "a= " << std::flush;
    std::cin >> a;
    std::cout << "b= " << std::flush;
    std::cin >> b;
    std::cout << "c= " << std::flush;
    std::cin >> c;

    double sqrt = std::sqrt((b * b) - (4 * a * c));
    double x1 = (-b - sqrt) / (2 * a);
    double x2 = (-b + sqrt) / (2 * a);
    std::cout << "Die Ergebnisse sind " << x1 << " und " << x2 << std::endl;
    return 0;
}