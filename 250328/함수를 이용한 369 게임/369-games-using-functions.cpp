#include <iostream>
using namespace std;

int a, b;

bool Is369(int n)
{
    int target = n % 10;
    if (target == 3 or target == 6 or target == 9)
        return true;
    else
        return false;
}

bool IsThreeTimes(int n)
{
    int num10 = n / 10;
    if (n % 3 == 0 or num10 % 3 == 0)
        return true;
    else
        return false;
}

int CountNums(int a, int b)
{
    int cnt = 0;
    for (int i = a; i <= b; i++)
    {
        if (Is369(i) or IsThreeTimes(i))
            cnt++;
    }
    return cnt;
}

int main() {
    cin >> a >> b;

    cout << CountNums(a, b) << endl;

    return 0;
}