#include <iostream>
#include <iomanip>
#include <locale>

int main()
{
    // Set the locale for output formatting
    std::cout.imbue(std::locale("C"));

    std::cout << "Enter a monetary value (e.g., $12.34): ";

    long double value; // Use long double for monetary input
    // Read the monetary value from standard input
    if (std::cin >> std::get_money(value))
    {
        // Successfully read the input, now display it in formatted currency
        std::cout << "You entered: " << std::put_money(value) << std::endl;

        // Convert to dollars for additional clarity
        double dollars = static_cast<double>(value) / 100.0; // Convert cents to dollars
        std::cout << "In dollars: $" << std::fixed << std::setprecision(2) << dollars << std::endl;
    }
    else
    {
        // Handle invalid input
        std::cerr << "Invalid input. Please enter a valid monetary value." << std::endl;
    }

    return 0;
}
