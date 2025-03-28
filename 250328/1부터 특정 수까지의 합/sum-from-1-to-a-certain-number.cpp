#include <iostream>

using namespace std;

int N;

int SumNDivide10(int x)
{
    int sum = 0;

    for (int i = x; i >= 1; i--)
    {
        sum += i;
    }

    return sum / 10;
}


int main() {
    cin >> N;

    cout << SumNDivide10(N) << endl;

    return 0;
}