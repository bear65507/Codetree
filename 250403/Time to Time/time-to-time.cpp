#include <iostream>
using namespace std;

int a, b, c, d;

int TimeToTime(int h, int m, int dest_h, int dest_m)
{
    int elapsed_min = 0;
    while (true)
    {
        if (h == dest_h and m == dest_m)
            return elapsed_min;

        elapsed_min++;
        m++;

        if (m == 60)
        {
            h++;
            m = 0;
        }
    }

}

int main() {
    cin >> a >> b >> c >> d;

    cout << TimeToTime(a, b, c, d);

    return 0;
}