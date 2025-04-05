#include <iostream>

using namespace std;

int N, B;

void ToOct(int N)
{
    int oct[20] = {};
    int idx_o = 0;

    while (true)
    {
        if (N < 8)
        {
            oct[idx_o++] = N;
            break;
        }
        oct[idx_o++] = N % 8;
        N /= 8;
    }

    for (int i = idx_o - 1; i >= 0; i--)
        cout << oct[i];
}
void ToFour(int N)
{
    int four[20] = {};
    int idx_f = 0;

    while (true)
    {
        if (N < 4)
        {
            four[idx_f++] = N;
            break;
        }
        four[idx_f++] = N % 4;
        N /= 4;
    }

    for (int i = idx_f - 1; i >= 0; i--)
        cout << four[i];
}


int main() {
    cin >> N >> B;
    
    switch (B)
    {
    case 4:
        ToFour(N);
        break;
    case 8:
        ToOct(N);
        break;
    default:
        break;
    }

    return 0;
}