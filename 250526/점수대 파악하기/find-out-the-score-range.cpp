#include <iostream>
using namespace std;

int main() {
    int score[10] = {0};
    int S;

    for(int i = 0; i < 100; i++)
    {
        cin >> S;
        if (S < 10)
            continue;
        score[S / 10 - 1]++;
    }

    for (int i = 9; i >= 0; i--)
    {
        cout << 10 * i + 10 << " - " << score[i] << endl;
    }
    return 0;
}