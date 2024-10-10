#include <iostream>
#include <string>

int main()
{
    std::string input;
    std::cout << "enter string: \n";
    getline(std::cin, input);
    int letters{}, numbers{}, upperLetters{}, cntrl{};
    for (char &v : input)
    {
        if (isalpha(v))
        {
            letters++;
        }
        if (isdigit(v))
        {
            numbers++;
        }
        if (isalpha(v) && isupper(v))
        {
            upperLetters++;
        }
        if (iscntrl(v) || iswspace(v))
        {
            cntrl++;
        }

        if (isupper(v))
        {
            v = tolower(v);
        }
        else if (islower(v))
        {
            v = toupper(v);
        }
    }
    std::cout << "ur string have:\n"
              << "letters: " << letters << '\n'
              << "numbers: " << numbers << '\n'
              << "upper letters: " << upperLetters << '\n'
              << "control characters: " << cntrl << '\n'
              << "string: " << input;
}