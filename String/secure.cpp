#include <iostream>
#include <string>
using namespace std;

void encrypt(string &s)
{
    int temp;
    for (int i{}; i < s.length(); i++)
    {
        temp = (int)s.at(i);
        if (temp >= 120 && temp <=123)
        {
            temp -= 23;
        }
        else if(temp >= 97 && temp <=122)
        {
            temp += 3;
        }
        s.at(i) = (char)temp;
    }
}
void decrypt(string &s)
{
    int temp;
    for (int i{}; i < s.length(); i++)
    {
        temp = (int)s.at(i);
        if (temp <= 99 && temp >= 97)
        {
            temp += 23;
        }
        else if (temp >= 97 && temp <= 122)
        {
            temp -= 3;
        }
        s.at(i) = (char)temp;
    }
}

int main()
{
    cout << "enter string to encrypt\n";
    string s;
    getline(cin, s);
    encrypt(s);
    cout << "encrypted:"
         << "\n";
    cout << s << "\n";
    decrypt(s);
    cout << "decrypted:"
         << "\n";
    cout << s << "\n";
    return 0;
}