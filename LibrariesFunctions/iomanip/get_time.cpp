#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>

int main()
{
    std::string input;
    std::cout << "Enter date and time (YYYY-MM-DD HH:MM:SS): ";
    std::getline(std::cin, input);

    std::tm t = {};
    std::istringstream ss(input);
    ss >> std::get_time(&t, "%Y-%m-%d %H:%M:%S");

    if (ss.fail())
    {
        std::cout << "Failed to parse date/time." << std::endl;
    }
    else
    {
        std::cout << "Parsed date and time: " << std::put_time(&t, "%Y-%m-%d %H:%M:%S") << std::endl;
    }

    return 0;
}
