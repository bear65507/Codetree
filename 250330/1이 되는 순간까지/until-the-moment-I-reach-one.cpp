#include <iostream>
using namespace std;

int N;

int Division(int n, int& cnt)
{
    if (n == 1)
        return cnt;
    if (n % 2 == 0)
    {
        cnt++;
        return Division(n / 2, cnt);
    }
    else
    {
        cnt++;
        return Division(n / 3, cnt);
    }
}

int main() {
    cin >> N;
    int cnt = 0;

    cout << Division(N, cnt) << endl;

    return 0;
}