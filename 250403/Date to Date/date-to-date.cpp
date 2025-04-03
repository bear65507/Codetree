#include <iostream>
using namespace std;

int m1, d1, m2, d2;

int DateToDate(int month, int day, int dest_month, int dest_day)
{
    int daysInMonth[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int elapsedDays = 1;

    while (true)
    {
        if (month == dest_month and day == dest_day)
            return elapsedDays;

        elapsedDays++;
        day++;
        if (day > daysInMonth[month])
        {
            month++;
            day = 1;
        }
    }

}

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    cout << DateToDate(m1, d1, m2, d2) << endl;

    return 0;
}