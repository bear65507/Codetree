#include <iostream>
using namespace std;

bool CheckDigit369(int n)
{
    while (n != 0)
    {
        if (n % 10 == 3 or n % 10 == 6 or n % 10 == 9)
            return true;
        n /= 10;
    }

    return false;
}

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        if (i % 3 == 0 or CheckDigit369(i))
            cout << 0 << " ";
        else
            cout << i << " ";
    } 

    return 0;
}