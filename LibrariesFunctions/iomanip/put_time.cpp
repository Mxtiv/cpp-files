#include <iostream>
#include <iomanip>
#include <ctime>

int main()
{
    std::time_t now = std::time(0);
    std::tm *localtm = std::localtime(&now);

    std::cout << "Current date and time: ";
    std::cout << std::put_time(localtm, "%Y-%m-%d %H:%M:%S") << std::endl;

    return 0;
}
