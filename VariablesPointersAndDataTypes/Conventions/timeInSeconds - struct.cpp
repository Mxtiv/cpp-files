#include <iostream>
using namespace std;
namespace inSeconds
{
    const int seconds = 1;
    const int minutes = 60;
    const int hours = 3600;
    const int days = inSeconds::hours * 24;
}
struct timex
{
    int seconds {};
    int minutes {};
    int hours {};
    int days {};
};
void time(int seconds, timex &czas)
{
    cout << "dni: " << seconds / inSeconds::days << endl;
    czas.days = seconds / inSeconds::days;
    seconds = seconds % inSeconds::days;

    cout << "godziny: " << seconds / inSeconds::hours << endl;
    czas.hours = seconds / inSeconds::hours;
    seconds = seconds % inSeconds::hours;

    cout << "minuty: " << seconds / inSeconds::minutes << endl;
    czas.minutes = seconds / inSeconds::minutes;
    seconds = seconds % 60;

    czas.seconds = seconds;
    cout << "sekundy: " << seconds;
}

int main()
{
    timex czas;
    int seconds;
    cout << "podaj czas w sekundach  ";
    cin >> seconds;
    time(seconds, czas);
    return 0;
}