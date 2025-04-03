#include <iostream>
using namespace std;

int a, b, c;

int DateTime(int dest_day, int dest_hour, int dest_min)
{
    int day = 11, hour = 11, min = 11;
    int elaspedMin = 0;

    while (true)
    {
        if (dest_day < day)
            return -1;
        else if (dest_day == day and (dest_hour < hour or (dest_hour == hour and dest_min < min)))
            return -1;

        if (day == dest_day and hour == dest_hour and min == dest_min)
            return elaspedMin;

        elaspedMin++;
        min++;

        if (min == 60)
        {
            hour++;
            min = 0;
        }
        if (hour == 24)
        {
            day++;
            hour = 0;
        }
    }
}

int main() {
    cin >> a >> b >> c;

    cout << DateTime(a, b, c) << endl;

    return 0;
}
