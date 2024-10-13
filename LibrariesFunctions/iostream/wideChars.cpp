#include <iostream>
#include <locale> // For setting the locale

int main()
{
    try
    {
        // Set the locale to a more basic one
        std::locale::global(std::locale("C")); // or "en_US" or "English"
    }
    catch (const std::exception &e)
    {
        std::wcerr << L"Locale setting failed: " << e.what() << std::endl;
        return 1; // Exit with error code
    }

    // Using wcout to display a message
    std::wcout << L"Enter a wide character: ";

    wchar_t wch;
    // Using wcin to read wide input
    std::wcin >> wch;

    // Using wcout to display the wide character
    std::wcout << L"You entered: " << wch << std::endl;

    // Logging the valid input
    std::wclog << L"Logging: Valid wide character." << std::endl;

    return 0;
}

// wcin  -	Standard input stream (wide) (object)
// wcout -	Standard output stream (wide) (object)
// wcerr -	Standard output stream for errors (wide-oriented) (object)
// wclog -	Standard output stream for logging (wide) (object)

// wchar_t : Typically 2 or 4 bytes, depending on the platform.This larger size enables the representation of a much wider range of characters.