#include <iostream>
using namespace std;

int sequence(int n)
{
    if (n == 1)
    {
        return 2;
    }
    else
    {
        return (sequence(n - 1) * sequence(n - 1)) - 100;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << sequence(n);
    return 0;
}