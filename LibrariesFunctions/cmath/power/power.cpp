#include <iostream>
#include <cmath> // For power functions

int main()
{
    double base, exponent;

    // Get user input for power function
    std::cout << "Enter the base for power function: ";
    std::cin >> base;
    std::cout << "Enter the exponent: ";
    std::cin >> exponent;

    // Compute power
    double powerResult = pow(base, exponent);
    std::cout << base << " raised to the power of " << exponent << " is: " << powerResult << std::endl;

    // Compute square root
    if (base >= 0)
    {
        double squareRoot = sqrt(base);
        std::cout << "Square root of " << base << " is: " << squareRoot << std::endl;
    }
    else
    {
        std::cout << "Square root is not defined for negative numbers." << std::endl;
    }

    // Compute cubic root
    double cubicRoot = cbrt(base);
    std::cout << "Cubic root of " << base << " is: " << cubicRoot << std::endl;

    // Get user input for hypotenuse calculation
    double a, b;
    std::cout << "Enter the lengths of the two sides of a right triangle (a b): ";
    std::cin >> a >> b;

    // Compute hypotenuse
    double hypotenuse = hypot(a, b);
    std::cout << "Hypotenuse of the triangle with sides " << a << " and " << b << " is: " << hypotenuse << std::endl;

    return 0;
}
