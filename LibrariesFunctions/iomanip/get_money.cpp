#include <iostream>
#include <iomanip>
#include <locale>

int main()
{
    std::cout.imbue(std::locale("en_US.UTF-8"));
    std::cout << "Enter a monetary value (e.g., $12.34): ";

    long long value;
    std::cin >> std::get_money(value); // Input in cents
    std::cout << "You entered: " << std::put_money(value) << std::endl;

    return 0;
}
