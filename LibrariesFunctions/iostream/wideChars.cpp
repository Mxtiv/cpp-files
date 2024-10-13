#include <iostream>
#include <locale> // For setting the locale

int main()
{
    // Set the locale to support wide characters
    std::locale::global(std::locale(""));

    // Using wcout to display a message
    std::wcout << L"Enter a wide character: ";

    wchar_t wch;
    // Using wcin to read wide input
    std::wcin >> wch;

    // Using wcout to display the wide character
    std::wcout << L"You entered: " << wch << std::endl;

    // Simulating an error using wcerr
    if (wch < 0)
    {
        std::wcerr << L"Error: Invalid wide character entered!" << std::endl;
    }
    else
    {
        std::wclog << L"Logging: Valid wide character." << std::endl;
    }

    return 0;
}
// wcin  -	Standard input stream (wide) (object)
// wcout -	Standard output stream (wide) (object)
// wcerr -	Standard output stream for errors (wide-oriented) (object)
// wclog -	Standard output stream for logging (wide) (object)

// wchar_t : Typically 2 or 4 bytes, depending on the platform.This larger size enables the representation of a much wider range of characters.