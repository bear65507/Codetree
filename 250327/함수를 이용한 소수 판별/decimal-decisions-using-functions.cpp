#include <iostream>
using namespace std;

int a, b;
int sum = 0;

bool IsPrime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int SumPrime(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        if (IsPrime(i))
            sum += i;
    }
    return sum;
}

int main() {
    cin >> a >> b;

    cout << SumPrime(a, b) << endl;

    return 0;
}