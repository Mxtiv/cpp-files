#include <iostream>
#include <iomanip>
#include <locale>

int main()
{
    std::cout.imbue(std::locale("C")); // Set locale for money formatting
    std::cout << "Monetary value: ";
    std::cout << std::showbase << std::put_money(123456); // Cents
    std::cout << std::endl;

    return 0;
}
