#include <iostream>
using namespace std;

int n;

int main() {
    cin >> n;
    int digits[20] = {};
    int idx = 0;
    
    while (true)
    {
        if (n < 2)
        {
            digits[idx++] = n;
            break;
        }

        digits[idx++] = n % 2;
        n /= 2;
    }

    for (int i = idx - 1; i >= 0; i--)
        cout << digits[i];

    return 0;
}