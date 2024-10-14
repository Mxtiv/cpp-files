#include <iostream>
#include <cmath> // Include cmath for math functions

int main()
{
    double value1 = 5.7;
    double value2 = -5.7;
    double value3 = 2.5;
    double value4 = 2.9;

    // ceil: Round up to the nearest integer
    std::cout << "ceil(" << value1 << ") = " << std::ceil(value1) << std::endl; // Outputs 6
    std::cout << "ceil(" << value2 << ") = " << std::ceil(value2) << std::endl; // Outputs -5

    // floor: Round down to the nearest integer
    std::cout << "floor(" << value1 << ") = " << std::floor(value1) << std::endl; // Outputs 5
    std::cout << "floor(" << value2 << ") = " << std::floor(value2) << std::endl; // Outputs -6

    // fmod: Compute remainder of division
    std::cout << "fmod(" << value1 << ", 2) = " << std::fmod(value1, 2) << std::endl; // Outputs 1.7

    // trunc: Truncate value
    std::cout << "trunc(" << value1 << ") = " << std::trunc(value1) << std::endl; // Outputs 5
    std::cout << "trunc(" << value2 << ") = " << std::trunc(value2) << std::endl; // Outputs -5

    // round: Round to nearest integer
    std::cout << "round(" << value3 << ") = " << std::round(value3) << std::endl; // Outputs 3
    std::cout << "round(" << value4 << ") = " << std::round(value4) << std::endl; // Outputs 3

    // lround: Round to nearest and cast to long integer
    std::cout << "lround(" << value3 << ") = " << std::lround(value3) << std::endl; // Outputs 3
    std::cout << "lround(" << value4 << ") = " << std::lround(value4) << std::endl; // Outputs 3

    // llround: Round to nearest and cast to long long integer
    std::cout << "llround(" << value3 << ") = " << std::llround(value3) << std::endl; // Outputs 3
    std::cout << "llround(" << value4 << ") = " << std::llround(value4) << std::endl; // Outputs 3

    // rint: Round to integral value (returns the same type)
    std::cout << "rint(" << value3 << ") = " << std::rint(value3) << std::endl; // Outputs 2
    std::cout << "rint(" << value4 << ") = " << std::rint(value4) << std::endl; // Outputs 3

    // lrint: Round and cast to long integer
    std::cout << "lrint(" << value3 << ") = " << std::lrint(value3) << std::endl; // Outputs 2
    std::cout << "lrint(" << value4 << ") = " << std::lrint(value4) << std::endl; // Outputs 3

    // llrint: Round and cast to long long integer
    std::cout << "llrint(" << value3 << ") = " << std::llrint(value3) << std::endl; // Outputs 2
    std::cout << "llrint(" << value4 << ") = " << std::llrint(value4) << std::endl; // Outputs 3

    // nearbyint: Round to nearby integral value (returns the same type)
    std::cout << "nearbyint(" << value3 << ") = " << std::nearbyint(value3) << std::endl; // Outputs 2
    std::cout << "nearbyint(" << value4 << ") = " << std::nearbyint(value4) << std::endl; // Outputs 3

    // remainder: Compute remainder (IEC 60559)
    std::cout << "remainder(" << value1 << ", 2) = " << std::remainder(value1, 2) << std::endl; // Outputs 0.3
    std::cout << "remainder(" << value2 << ", 2) = " << std::remainder(value2, 2) << std::endl; // Outputs -0.3

    // remquo: Compute remainder and quotient
    int quotient;
    double rem = std::remquo(value1, 2, &quotient);
    std::cout << "remquo(" << value1 << ", 2) = (" << rem << ", " << quotient << ")" << std::endl; // Outputs (-0.3, 3)

    return 0;
}

// ceil(double x): Rounds up to the nearest integer.
// floor(double x): Rounds down to the nearest integer.
// fmod(double x, double y): Computes the remainder of x divided by y.
// trunc(double x): Truncates the decimal part of x, returning the integer part.
// round(double x): Rounds x to the nearest integer.
// lround(double x): Rounds x to the nearest integer and returns a long integer.
// llround(double x): Rounds x to the nearest integer and returns a long long integer.
// rint(double x): Rounds x to the nearest integer (returns the same type).
// lrint(double x): Rounds x and returns a long integer.
// llrint(double x): Rounds x and returns a long long integer.
// nearbyint(double x): Rounds x to the nearest integral value (returns the same type).
// remainder(double x, double y): Computes the remainder of x divided by y, following IEC 60559 rules.
// remquo(double x, double y, int* quo): Computes the remainder of x divided by y and also gives the quotient.