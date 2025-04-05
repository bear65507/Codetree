#include <iostream>
#include <string>
using namespace std;

string N;

int ToDecimal(string N)
{
    int num = 0;
    for (int i = 0; i < N.length(); i++)
    {
        char n = N[i];
        num = num * 2 + (n - '0');
    }

    return num;
}
void ToBinary(int dec)
{
    dec *= 17;
    int digits[20] = {};
    int idx = 0;
    while (true)
    {
        if (dec < 2)
        {
            digits[idx++] = dec;
            break;
        }
        digits[idx++] = dec % 2;
        dec /= 2;
    }

    for (int i = idx - 1; i >= 0; i--)
        cout << digits[i];
}

int main() {
    cin >> N;
    
    int dec = ToDecimal(N);
    ToBinary(dec);

    return 0;
}