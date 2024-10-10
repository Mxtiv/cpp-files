#include <iostream>
using namespace std;
namespace inSeconds
{
    const int seconds = 1;
    const int minutes = 60;
    const int hours = 3600;
    const int shrekFilms = 1.5 * hours;
    const int days = shrekFilms * 16;
}
struct timex
{
    int seconds{};
    int minutes{};
    int hours{};
    int shrekFilms{};
    int days{};
};
void secondsToTime(int seconds, timex &czas) 
{
    czas.days = seconds / inSeconds::days;
    seconds = seconds % inSeconds::days;

    czas.shrekFilms = seconds / inSeconds::shrekFilms;
    seconds = seconds % inSeconds::shrekFilms;

    czas.hours = seconds / inSeconds::hours;
    seconds = seconds % inSeconds::hours;

    czas.minutes = seconds / inSeconds::minutes;
    seconds = seconds % inSeconds::minutes;

    czas.seconds = seconds;
}
int main()
{
    int seconds{};
    timex time1;
    cout << "enter time in seconds: \n";
    cin >> seconds;
    secondsToTime(seconds, time1);
    cout << "days: " << time1.days << endl
         << "shrekFilms: " << time1.shrekFilms << endl
         << "hours: " << time1.hours << endl
         << "minutes: " << time1.minutes << endl
         << "seconds: " << time1.seconds << endl;
    return 0;
}