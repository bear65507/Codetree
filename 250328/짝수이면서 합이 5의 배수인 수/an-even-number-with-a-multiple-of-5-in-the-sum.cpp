#include <iostream>
using namespace std;

int n;

void EvenNSum5(int n)
{
    int num10 = n / 10, num1 = n % 10;
    if (n % 2 == 0 and (num10 + num1) % 5 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main() {
    cin >> n;

    EvenNSum5(n);

    return 0;
}