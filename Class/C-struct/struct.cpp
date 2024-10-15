#include <iostream>
using namespace std;

int main()
{
    struct time
    {
        int hours;
        int minutes;
        int seconds;
    };
    time czasEgzaminu;
    czasEgzaminu.hours = 2;
    czasEgzaminu.minutes = 30;
    czasEgzaminu.seconds = 0;
    cout << "godziny: " << czasEgzaminu.hours << endl;
    cout << "minuty: " << czasEgzaminu.minutes << endl;
    cout << "sekundy: " << czasEgzaminu.seconds << endl;
    return 0;
}