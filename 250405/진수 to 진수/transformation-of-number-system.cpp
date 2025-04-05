#include <iostream>
#include <string>
using namespace std;

int a, b;
string n;

int ToDecimal(int a, string n)
{
    int dec = 0;
    for (int i = 0; i < n.length(); i++)
    {
        char c = n[i];
        dec = dec * a + (c - '0');
    }
    return dec;
}

void To_BNumeral(int b, int dec)
{
    int digits[20] = {};
    int idx = 0;
    while (true)
    {
        if (dec < b)
        {
            digits[idx++] = dec;
            break;
        }
        digits[idx++] = dec % b;
        dec /= b;
    }

    for (int i = idx - 1; i >= 0; i--)
        cout << digits[i];
}
int main() {
    cin >> a >> b;
    cin >> n;

    int dec = ToDecimal(a, n);
    To_BNumeral(b, dec);

    return 0;
}