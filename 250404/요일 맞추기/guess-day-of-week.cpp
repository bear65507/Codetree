#include <iostream>
#include <string>
using namespace std;

int m1, d1, m2, d2;

int DateToDays(int start_m, int start_d, int dest_m, int dest_d)
{
    int month = start_m, day = start_d;
    int elsapedDays = 0;
    int daysinMonth[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (month == dest_m and day == dest_d)
        return elsapedDays;

    if (dest_m > month or (month == dest_m and dest_d > day))
    {
        while (true)
        {
            if (month == dest_m and day == dest_d)
                return elsapedDays;

            elsapedDays++;
            day++;

            if (day > daysinMonth[month])
            {
                month++;
                day = 1;
            }
        }
    }
    else if (dest_m < month or (month == dest_m and dest_d < day))
    {
        while (true)
        {
            if (month == dest_m and day == dest_d)
                return -elsapedDays;
            elsapedDays++;
            day--;

            if (day < 1)
            {
                month--;
                day = daysinMonth[month];
            }
        }
    }
}

int FindDotW(int elsapedDays)
{
    // 0, 1, 2, 3, 4, 5, 6 = Mon, Tue, Wed, Thu, Fri, Sat, Sun
    int leftDays = 0; // Mon
    if (elsapedDays >= 0)
    {
        while (true)
        {
            if (elsapedDays == 0)
                return leftDays;
            elsapedDays--;
            leftDays++;
            if (leftDays == 7)
                leftDays = 0; // Mon
        }
    }
    else
    {
        while (true)
        {
            if (elsapedDays == 0)
                return leftDays;
            elsapedDays++;
            leftDays--;
            if (leftDays < 0)
                leftDays = 6; // Sun
        }
    }
}

string PrintInfo(int leftDays)
{
    switch (leftDays)
    {
    case 0:
        return "Mon";
        break;
    case 1:
        return "Tue";
        break;
    case 2:
        return "Wed";
        break;
    case 3:
        return "Thu";
        break;
    case 4:
        return "Fri";
        break;
    case 5:
        return "Sat";
        break;
    case 6:
        return "Sun";
        break;
    default:
        break;
    }
}

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int dtd = DateToDays(m1, d1, m2, d2);
    //cout << "Elasped Days: " << dtd << endl;
    int dotw = FindDotW(dtd);
    cout << PrintInfo(dotw);

    return 0;
}