#include <iostream>
using namespace std;

int m1, m2, d1, d2;
string A;

int ElaspedDays(int start_m, int start_d, int dest_m, int dest_d)
{
    int month = start_m, day = start_d;
    int elaspedDays = 0;
    int daysinMonth[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    while (true)
    {
        if (month == dest_m and day == dest_d)
            return elaspedDays;
        day++;
        elaspedDays++;

        if (day > daysinMonth[month])
        {
            month++;
            day = 1;
        }
    }
}

int CountDotW(int elaspedDays, string A)
{
    int dotw_target, count = 0;
    int dotw_now = 0; // Mon
    string dotw_arr[7] = { "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun" };
    for (int i = 0; i < 7; i++)
        if (A == dotw_arr[i])
            dotw_target = i;

    while (true)
    {
        if (dotw_now == dotw_target)
            count++;
        if (elaspedDays == 0)
            return count;

        elaspedDays--;
        dotw_now++;

        if (dotw_now == 7)
            dotw_now = 0;
    }
}

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    int eD = ElaspedDays(m1, d1, m2, d2);
    //cout << "Elasped Days: " << eD << endl;
    cout << CountDotW(eD, A) << endl;

    return 0;
}