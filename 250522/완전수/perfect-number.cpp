#include <iostream>
using namespace std;

bool JinYakSu(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    } 
    if (sum == n)
        return true;
    else
        return false;
}

int start, e;

int main() {
    cin >> start >> e;

    int cnt = 0;
    for (int i = start; i <= e; i++)
    {
        if (JinYakSu(i))
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}
