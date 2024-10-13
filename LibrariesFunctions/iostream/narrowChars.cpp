#include <iostream>

int main()
{
    // Using cout to display a message
    std::cout << "Enter a number: ";

    int number;
    // Using cin to read input
    std::cin >> number;

    // Using cout to display the number
    std::cout << "You entered: " << number << std::endl;

    // Simulating an error using cerr
    if (number < 0)
    {
        std::cerr << "Error: Negative number entered!" << std::endl;
    }
    else
    {
        std::clog << "Logging: Number is non-negative." << std::endl;
    }

    return 0;
}
// cin - Standard input stream(object)
// cout - Standard output stream(object)
// cerr - Standard output stream for errors (object)
// clog	- Standard output stream for logging (object)

// char: Typically 1 byte (8 bits), which allows for 256 possible values (0-255). This is sufficient for standard ASCII characters and a few extended characters.