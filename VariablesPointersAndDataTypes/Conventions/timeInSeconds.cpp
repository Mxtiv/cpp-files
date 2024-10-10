#include <iostream>
using namespace std;
namespace inSeconds
{
    const int seconds = 1;
    const int minutes = 60;
    const int hours = 3600;
    const int days = 3600 * 24;
}
void time(int seconds)
{
    if (seconds >= inSeconds::days)
    {
        cout << "dni: " << seconds / inSeconds::days << endl;
        seconds = seconds - inSeconds::days * (seconds / inSeconds::days);
    }
    if (seconds >= inSeconds::hours)
    {
        cout << "godzin: " << seconds / inSeconds::hours << endl;
        seconds = seconds - inSeconds::hours * (seconds / inSeconds::hours);
    }
    if (seconds >= inSeconds::minutes)
    {
        cout << "minut: " << seconds / inSeconds::minutes << endl;
        seconds = seconds - inSeconds::minutes * (seconds / inSeconds::minutes);
    }
    if (seconds >= inSeconds::seconds)
    {
        cout << "sekund: " << seconds / inSeconds::seconds << endl;
        seconds = seconds - inSeconds::seconds * (seconds / inSeconds::seconds);
    }
}
int main()
{
    int seconds;
    cout << "podaj czas w sekundach  ";
    cin >> seconds;
    time(seconds);
    return 0;
}