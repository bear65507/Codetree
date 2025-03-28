#include <iostream>
using namespace std;

int a, b;

bool Is369(int n)
{
    int target = n, idx = 0;
    int n_arr[8] = { 0 };
    while (target != 0)
    {
        n_arr[idx] = target % 10;
        idx++;
        target /= 10;
    }
    for (int i = idx; i >= 0; i--)
    {
        if (n_arr[i] != 0 and n_arr[i] % 3 == 0)
            return true;
    }
    return false;
}

bool IsThreeTimes(int n)
{
    if (n % 3 == 0)
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