#include <iostream>
#include <iomanip>
#include <locale>

int main()
{
    std::cout.imbue(std::locale("en_US.UTF-8")); // Set locale for money formatting
    std::cout << "Monetary value: ";
    std::cout << std::showbase << std::put_money(123456); // Cents
    std::cout << std::endl;

    return 0;
}
