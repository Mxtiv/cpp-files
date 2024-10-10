#include <iomanip> //used to std::setprecision()
#include <iostream>

int main()
{
    double num1 = 3.123456789123456789;
    float num2 =  3.123456789123456789;
    std::cout << std::setprecision(18);
    std::cout << "double:\n"
              << num1 << std::endl; //precyzja double to 15 miejsc po przecinku
    std::cout << "float:\n"
              << num2 << std::endl; // precyzja float to 7 miejsc po przecinku
    return 0;
}