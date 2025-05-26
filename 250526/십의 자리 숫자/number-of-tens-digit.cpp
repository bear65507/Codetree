#include <iostream>
using namespace std;

int main() {
    int N;
    int digit[9] = {0};

    for (int i = 0; i < 100; i++)
    {
        cin >> N;
        if (N == 0)
            break;
        digit[(N / 10) - 1]++;
    }

    for (int i = 0; i < 9; i++)
    {
        cout << i + 1 << " - " << digit[i] << endl;
    }
    return 0;
}