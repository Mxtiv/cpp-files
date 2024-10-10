#include <iostream>
using namespace std;
class Account
{
protected:
    float balance{};
    int pin{};

public:
    void depMoney(double amount)
    {
        if (amount < 100)
        {
            this->balance += amount;
            cout << "transaction suceed\n";
        }
        else
        {
            cout << "U need pin for this transaction\n"
                 << "enter pin:\n";
            int inputPin{};
            cin >> inputPin;
            if (inputPin == pin)
            {
                this->balance += amount;
                cout << "transaction suceed\n";
            }
            else
            {
                cout << "wrong pin\n";
                cout << "transaction failed";
            }
        }
    }
    void withMoney(double amount)
    {
        if (amount < 100)
        {
            this->balance -= amount;
            cout << "transaction suceed\n";
        }
        else
        {
            cout << "U need pin for this transaction\n"
                 << "enter pin:\n";
            int inputPin{};
            cin >> inputPin;
            if (inputPin == pin)
            {
                this->balance -= amount;
                cout << "transaction suceed\n";
            }
            else
            {
                cout << "wrong pin\n";
                cout << "transaction failed";
            }
        }
    }
    Account()
    {
        this->pin = 1234;
        this->balance = 0.0;
    }
    Account(int pin)
    {
        this->pin = pin;
        this->balance = 0.0;
    }
    Account(int pin, float balance)
    {
        this->pin = pin;
        this->balance = balance;
    }
    int getBalance()
    {
        return this->balance;
    }
    void setPin()
    {
        int inputPin{};
        cout << "enter old pin (defalut 1234)\n";
        cin >> inputPin;
        if (inputPin == pin)
        {
            cout << "enter new pin:\n";
            cin >> inputPin;
            this->pin = inputPin;
            cout << "pin changed succesfully\n";
        }
        else
        {
            cout << "wrong pin\n";
        }
    }
};

int main()
{
    Account igorchpolak(1032, 20);
    char selection{};
    float amount{};
    do
    {
        cout << "\nselect option: \n"
             << "b - display balance\n"
             << "d - deposit money\n"
             << "w - withdraw money\n"
             << "p - set new pin\n"
             << "q - quit\n\n";
        cin >> selection;
        switch (selection)
        {
        case 'b':
            cout << "\nBalance: " << igorchpolak.getBalance() << endl;
            break;
        case 'd':
            cout << "\nhow much would u like to deposit?\n";
            cin >> amount;
            igorchpolak.depMoney(amount);

            break;
        case 'w':
            cout << "\nhow much would u like to withdraw?\n";
            cin >> amount;
            igorchpolak.withMoney(amount);
            break;
        case 'p':
            igorchpolak.setPin();
            break;
        case 'q':
            cout << "\nbye bye!\n";
        }

    } while (selection != 'q');
    return 0;
}