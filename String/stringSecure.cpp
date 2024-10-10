#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string in, key{"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    cin >> in;
    for (auto letter : in)
    {
        cout << key.at(alphabet.find(letter));
    }
}