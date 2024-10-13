#include <iostream>
#include <iomanip>

int main()
{
    double pi = 3.14159265358979;

    std::cout << std::setprecision(3) << "Pi rounded to 3 decimals: " << pi << std::endl;

    return 0;
}
