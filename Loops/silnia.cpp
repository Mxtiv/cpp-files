#include <iostream>
using namespace std;

int silnia(int n)
{
    if (n == 0)
        return 1;
    int result = 1;
    for (int i{1}; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    cout << silnia(n);
    return 0;
}