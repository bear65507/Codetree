#include <iostream>
using namespace std;

void Calculate(int a, int b, int digit[])
{
    if (a <= 1)
        return;
    digit[a % b]++;
    Calculate(a / b, b, digit);
}

int main() {
    int a, b, res = 0;
    int digit[10] = {0};
    cin >> a >> b;

    Calculate(a, b, digit);
    for (int i = 0; i < 10; i++)
    {
        if (digit[i] > 0)
            res += digit[i] * digit[i];
    }

    cout << res << endl;

    return 0;
}