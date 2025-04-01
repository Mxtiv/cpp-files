#include <iostream>
#include <stdexcept>
using namespace std;
#define KAPREKAR 6174

int sort(int number, bool descending)
{
    try
    {
        if (number < 0)
            throw logic_error("number cannot be negative\n");
        if (number > 9999 || number < 1000)
            throw logic_error("number has to be 4-digits\n");
        int temp = number;
        int *digits = new int[4];
        digits[0] = temp / 1000;
        temp %= 1000;
        digits[1] = temp / 100;
        temp %= 100;
        digits[2] = temp / 10;
        temp %= 10;
        digits[3] = temp;
        temp = 0;

        for (int i{0}; i < 4 - 1; i++)
        {
            for (int j{0}; j < 4 - i - 1; j++)
            {
                if (digits[j] > digits[j + 1])
                {
                    int temp = digits[j];
                    digits[j] = digits[j + 1];
                    digits[j + 1] = temp;
                }
            }
        }
        int result{};
        if (!descending)
            result = 1000 * digits[0] + 100 * digits[1] + 10 * digits[2] + digits[3];
        else
            result = 1000 * digits[3] + 100 * digits[2] + 10 * digits[1] + digits[0];

        if (result > 9999)
            throw logic_error("error in calculations has occured\n");

        delete[] digits;
        digits = nullptr;
        return result;
    }
    catch (logic_error &e)
    {
        cout << e.what();
        return -1;
    }
}
void kaprekar(int number, int &count)
{
    try
    {
        if (number > 9999 || number < 1000)
            throw number;
        while (number != KAPREKAR)
        {
            number = (sort(number, 1) - sort(number, 0));
            count++;
        }
        cout << "It took " << count << " loops to get kaprekar constant\n";
    }
    catch (int)
    {
        cout << "number u entered is in wrong format\n";
    }
}
int main()
{
    int number, count{};
    cin >> number;
    kaprekar(number, count);
}