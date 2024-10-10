#include <iostream>
#include <cstring>
char *fullName(){
    const int maxLength = 100;
    char fullName[maxLength], middleName[maxLength];
    std::cout << "Enter first name and last name separated by space\n";
    std::cin.getline(fullName, maxLength);
    std::cout << "Enter middle name\n";
    std::cin.getline(middleName, maxLength);
    char *insertPos = std::strchr(fullName, ' ');
    if (insertPos != nullptr)
    {
        insertPos++;// after space
        size_t resultLength = std::strlen(fullName) + std::strlen(middleName) + 2; // +2 for space and '\0'
        char *result = new char[resultLength];
        std::strncpy(result, fullName, insertPos - fullName);
        result[insertPos - fullName] = '\0';
        std::strcat(result, middleName);
        std::strcat(result, " ");
        std::strcat(result, insertPos);
        return result;
    }
    else
    {
        std::cout << "Invalid format" << '\n';
        return nullptr;
    }
}
int main()
{   
    char *result = fullName();
    if(result!=nullptr)
        std::cout << "Full name with middle name: \n" << result << '\n';
    delete[] result;
    return 0;
}
