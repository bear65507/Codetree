#include <iostream>

using namespace std;

int N, B;

void Numeral(int N)
{
    int numeral[20] = {};
    int idx = 0;

    while (true)
    {
        if (N < B)
        {
            numeral[idx++] = N;
            break;
        }
        numeral[idx++] = N % B;
        N /= B;
    }

    for (int i = idx - 1; i >= 0; i--)
        cout << numeral[i];
}

int main() {
    cin >> N >> B;
    
    Numeral(N);

    return 0;
}