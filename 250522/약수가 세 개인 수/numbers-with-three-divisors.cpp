#include <iostream>
using namespace std;

#define PRIMECNT 3

bool PrimeCount(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cnt++;
    }
    if (cnt == PRIMECNT)
        return true;
    else
        return false;
}

int st, ed;

int main() {
    cin >> st >> ed;

    int cnt = 0;
    for (int i = st; i <= ed; i++)
    {
        if (PrimeCount(i))
            cnt++;
    }
    
    cout << cnt << endl;

    return 0;
}
