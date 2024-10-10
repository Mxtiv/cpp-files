#include <iostream>
using namespace std;

int sequence(int n)
{
    if (n == 1)
    {
        return 3;
    }
    else
    {
        return (sequence(n - 1) * sequence(n - 1)) - (20 * sequence(n - 1));
    }
}
int main()
{
    int n;
    cin >> n;
    cout << sequence(n);
    return 0;
}